// Jiwon Cha
// jc4va

#include<iostream>
#include<algorithm>
#include<fstream>
#include<queue>
#include<string>
#include<list>
#include<stdlib.h>
using namespace std;

class vertex{
public:
  vertex(){
    indegree = 0;
    element = "";
  };
  vertex(string s){
    indegree = 0;
    element = s;
  };
  string element;
  int indegree;
  vector<vertex*> pointers;
  
};

vector<vertex*> adjList;

// slide 11: topological sort
void topsort(){
  queue<vertex*> q;
  vertex *v, *w;
  
  for (int i=0;i<adjList.size(); i++){
    v = adjList[i];
    if(v->indegree == 0){
      q.push(v);
    }
  }

  while(!q.empty()){
    v = q.front();
    q.pop();

    cout << v->element << " ";
    
    for (int i = 0; i < v->pointers.size(); i++){
      w = v->pointers[i];
      w->indegree--;
      if (w->indegree == 0){
	         q.push(w);
      }
    }
  }
}

int main(int argc, char **argv){
  
  if (argc!= 2){
    cout << "Must supply the input file name as the one and only parameter" << endl;
    exit(1);
  }

  ifstream file(argv[1], ifstream::binary);

  if ( !file.is_open() ) {
    cout << "Unable to open file '" << argv[1] << "'." << endl;
    exit(2);
  }

  vector<string> vec;

  string s1, s2;
  string temp, temp1;
  int num;
  string str;  

  while(getline(file,str)){
    file >> temp;
    file >> temp1;
    if (temp == "0" && temp1 == "0"){
      break;
    }
    vec.push_back(temp);
    vec.push_back(temp1);
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
  }

  for(vector<string>::iterator it = vec.begin(); it != vec.end(); it++){
    vertex *t = new vertex(*it);
    adjList.push_back(t);
  }
  
  file.close();

  ifstream file2(argv[1], ifstream::binary);

  while(getline(file2, str)){
    file2 >> s1;
    file2 >> s2;
    vertex *v = new vertex(s1);
    vertex *w = new vertex(s2);
    if (s1 == "0" && s2 == "0")
      break;
    for (int i = 0; i < adjList.size(); i++){
      if (s1 == adjList[i]->element){
        adjList[i]->pointers.push_back(w);
      }
    }
  }

  
  
  topsort();

  cout << endl;

  file.close();

  cout << vec.size() * sizeof(string) << endl;
  cout << adjList.size() * sizeof(vertex) << endl;
}

	/*
    for (int i = 0; i < ; i++){
      if (s1 == adjList[i]->element){
	adjList[i]->pointers.push_back(w);
      }
      else{
	v->pointers.push_back(w);
	adjList.push_back(v);
      }
    }
	*/
