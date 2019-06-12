/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/21/2017
  Name of the file: bitCounter.cpp
 */

#include<iostream>
#include<string>
using namespace std;

int bitCounter(int x){
  if (x == 0){
    return 0;
  }
  else if ( x == 1){
    return 1;
  }
  else if (x%2 == 0){
    return bitCounter(x/2);
  }
  else {
    return bitCounter(float(x/2))+1;
  }
}

int main (int argc, char **argv){
  // argc: number of parameters + 1
  // argv: C string that contains the program name
  // argv[1]: 1st command line parameter
  if (argc == 0){
    cout << "Error" << endl;
  }
  int x = atoi(argv[1]);
  cout << bitCounter(x) << endl;
}
