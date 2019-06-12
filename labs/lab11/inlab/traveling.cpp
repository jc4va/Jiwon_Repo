// Jiwon Cha
// jc4va

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

#include "middleearth.h"

float computeDistance (MiddleEarth &me, string start, vector<string> dests);
void printRoute (string start, vector<string> dests);

int main (int argc, char **argv) {
    // check the number of parameters
    if ( argc != 6 ) {
        cout << "Usage: " << argv[0] << " <world_height> <world_width> "
             << "<num_cities> <random_seed> <cities_to_visit>" << endl;
        exit(0);
    }
    // we'll assume the parameters are all well-formed
    int width, height, num_cities, rand_seed, cities_to_visit;
    sscanf (argv[1], "%d", &width);
    sscanf (argv[2], "%d", &height);
    sscanf (argv[3], "%d", &num_cities);
    sscanf (argv[4], "%d", &rand_seed);
    sscanf (argv[5], "%d", &cities_to_visit);
    // Create the world, and select your itinerary
    MiddleEarth me(width, height, num_cities, rand_seed);
    vector<string> dests = me.getItinerary(cities_to_visit);

    float d = computeDistance(me, dests[0], dests);

    sort(dests.begin()+1, dests.end());

    while(next_permutation(dests.begin()+1, dests.end())){
	float newPath = computeDistance(me, dests[0], dests);
	if (newPath < d){
	  d = newPath;
	}
      }

    cout << "Minimum path has distance " << d << ": ";
    printRoute(dests[0], dests); 
    cout << endl;
    
    return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parameter, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  float f = 0.0;
  for (int i = 0; i < dests.size(); i++){
    f += me.getDistance(start, dests[i]);
    start = dests[i];
  }
  f += me.getDistance(dests[0], dests[dests.size()-1]);
  return f;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
void printRoute (string start, vector<string> dests) {
  for(vector<string>::iterator it = dests.begin(); it != dests.end(); ++it){
    cout << *it << " -> ";
  }
  cout << start;
}
