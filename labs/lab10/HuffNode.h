/*
  Name: Jiwon Cha
  ID: jc4va
 */

#ifndef HUFFNODE_H
#define HUFFNODE_H

#include<iostream>
using namespace std;

class HuffNode{
 public:
  HuffNode(char c);
  ~HuffNode();
  HuffNode *right, *left;
  int frequency;
  char charac;
  
};

#endif
    
