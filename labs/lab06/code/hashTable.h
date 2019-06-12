/*
    Name: Jiwon Cha
    ID: jc4va
    Date: 10/17/2017
    File: hashTable.h
*/


#ifndef HASHTABLE_H
#define HASHTABLE_H

#include<string>
#include<cmath>
#include <list>
#include<vector>
#include<cstdlib>
#include<iostream>
using namespace std;

class hashTable{
public:
	hashTable(int size);
	~hashTable();
	bool find(string s);
	void insert(string s);
	int hashFunction(string s);
	bool checkprime(unsigned int p);
	int getNextPrime (unsigned int n);
	int size();

private:
	vector<list <string> > buckets;
	int tableSize;
};

#endif
