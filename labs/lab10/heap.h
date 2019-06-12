/*
  Name: Jiwon Cha
  ID: jc4va
 */

#ifndef HEAP_H
#define HEAP_H

#include<iostream>
#include<vector>
#include<string>
#include "HuffNode.h"
using namespace std;

class binary_heap{
 public:
  binary_heap();
  binary_heap(vector<HuffNode*> vec);
  ~binary_heap();
  void insert(HuffNode *x);
  void percolateUp(int hole);
  HuffNode* deleteMin();
  void percolateDown(int hole);
  HuffNode *findMin();
  unsigned int size();
  void makeEmpty();
  bool isEmpty();
  void print();

 private:
  friend class HuffNode;
  vector<HuffNode*> heap;
  int heap_size;
};

#endif
