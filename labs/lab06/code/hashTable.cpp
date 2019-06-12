/*
    Name: Jiwon Cha
    ID: jc4va
    Date: 10/17/2017
    File: hashTable.cpp
*/


#include "hashTable.h"
#include<vector>
#include<string>
#include<list>
using namespace std;

hashTable::hashTable(int size){
  buckets = vector<list <string> >();
  if (checkprime(size) == false){
    int n = getNextPrime(size);
    buckets.resize(n);
    tableSize = n;
  }
  else{
    buckets.resize(size);
    tableSize = size;
  }
}

hashTable::~hashTable(){
}

bool hashTable::find(string s){
  int n = hashFunction(s);
  for (list<string>::iterator it=buckets[n].begin(); it != buckets[n].end(); ++it){
    if (s == *it){
      return true;
    }
  }
  return false;
}

void hashTable::insert(string s){
  buckets.at(hashFunction(s)).push_back(s);
}

int hashTable::hashFunction(string s){
  int n = 0;
  for (int i = 0; i < 3; i++){
    n += 37*i + s[i];
  }
  n = n % buckets.size();
  return n;
}

int hashTable::size(){
  return tableSize;
}

bool hashTable::checkprime(unsigned int p) {
    if ( p <= 1 ) // 0 and 1 are not primes; the are both special cases
        return false;
    if ( p == 2 ) // 2 is prime
        return true;
    if ( p % 2 == 0 ) // even numbers other than 2 are not prime
        return false;
    for ( int i = 3; i*i <= p; i += 2 ) // only go up to the sqrt of p
        if ( p % i == 0 )
            return false;
    return true; 
}

int hashTable::getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n; // all your primes are belong to us
}
