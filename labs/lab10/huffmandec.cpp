#include<iostream>
#include<string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "HuffNode.h"
using namespace std;

int retval = 0;

void makeTree(HuffNode*& root, char c, string prefix, int i){
  if(i == prefix.length()){
    root = new HuffNode(c);
  }
  else{
    if (root == NULL){
      root = new HuffNode('-');
    }
    if (prefix.at(i) == '0'){
      makeTree(root->left, c, prefix, i+1);
    }
    else{
      makeTree(root->right, c, prefix, i+1);
    }
  }
}

void traverse(HuffNode *root, string prefix, int i){
  if (root->left == NULL && root->right == NULL){
    cout << root->charac;
    retval = i;
  }
  else{
    if (prefix.at(i) == '0'){
      traverse(root->left, prefix, i+1);
    }
    else{
      traverse(root->right, prefix, i+1);
    }
  }
}

int main(int argc, char **argv){
  if (argc != 2){
    cout << "Must supply the input file name as the only parameter" << endl;
    exit(1);
  }

  ifstream file(argv[1], ifstream::binary);
  if (!file.is_open()){
    cout << "Unable to open file '" << argv[1] << "'." << endl;
    exit(2);
  }

  // read in the first section of the file: the prefix codes
  HuffNode *huff = new HuffNode('-');
  while(true){
    string character, prefix;
    file >> character;
    if (character[0] == '\n' || character[0] == '\r'){
      ;
    }
    if ((character[0] == '-') && (character.length() > 1))
      break;
    if (character == "space")
      character = ' ';
    file >> prefix;
    char c= character[0];
    makeTree(huff, c, prefix, 0);
  }
  
  // read in the second section of the file: the encoded message
  stringstream sstm;
  while(true){
    string bits;
    file >> bits;
    if(bits[0] == '-')
      break;
    sstm << bits;
  }

  string allbits = sstm.str();
  while(allbits.length()!=0){
    traverse(huff,allbits,0);
    allbits.erase(0,retval);
  }
  
  cout << endl;
  file.close();
  
  return 0;
}
