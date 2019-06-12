/*
    Name: Jiwon Cha
    ID: jc4va
    Date: 10/17/2017
    File: wordPuzzle.cpp
*/


#include "hashTable.h"
#include<vector>
#include<string>
#include<fstream>
#include<list>
using namespace std;

int main2(int argc, char ** argv){
	hashTable myhash = hashTable(219380192);

	string sd;
	string words = argv[1];
	int wrows = 0;
	ifstream word(words.c_str());
    if(!word.is_open()){
      cout << "false" << endl;
    }
    hashTable mydic = hashTable(wrows);
    while(word.is_open()){
      while(getline(word, sd)){
        myhash.insert(sd);
        wrows++;
      }
      word.close();
	}
	cout << wrows << endl;
}