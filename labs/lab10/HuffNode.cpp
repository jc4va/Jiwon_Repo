/*
  Name: Jiwon Cha
  ID: jc4va
 */

#include<iostream>
#include "HuffNode.h"
using namespace std;

HuffNode::HuffNode(char c){
  left = NULL; right = NULL;
  charac = c;
  frequency = 1;
}


