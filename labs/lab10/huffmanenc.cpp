/*
  Name: Jiwon Cha
  ID: jc4va
 */

#include<iostream>
#include "HuffNode.h"
#include "heap.h"
#include<vector>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<stack>
using namespace std;

string asVal[128];

/* Decompression!
void makeTree(HuffNode*& root, char c, string prefix, int i){
  if(i == prefix.length()){
    root = new HuffNode(c);
  }
  else{
    if (root == NULL){
      root = new HuffNode('_');
    }
    if (prefix.at(i) == '0'){
      makeTree(root->left, c, prefix, i+1);
    }
    else{
      makeTree(root->right, c, prefix, i+1);
    }
  }
}
*/
string* findCodes(HuffNode* root, string prefix){
  // make an array, instead of numbers an empty string in each spot
  // string = prefix
  
  if(root->left == NULL && root->right == NULL){
    if(root->charac == ' '){
      cout << "space" << " " << prefix << endl;
      int s = root->charac;
      asVal[s] = prefix;
    }
    else{
      cout << root->charac << " " << prefix << endl;
      int x = root->charac;
      asVal[x] = prefix;
    }
  }

  else{
    findCodes(root->left, prefix + '0');
    findCodes(root->right, prefix + '1');
  }
}

int main(int argc, char **argv){

  // 1. Read the source file and determine the frequencies of the characters in the file

  char g;
  int freq[128];
  int count = 0;
  int distinct = 0;
  
  if (argc!=2){
    cout << "Must supply the input file name as the one and only parameter" << endl;
    exit(1);
  }

  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL){
    cout << "File '" << argv[1] << "' does not exist!" << endl;
    exit(2);
  }

  for (int i = 32; i < 128; i++){
    freq[i] = 0;
  }

  while( (g = fgetc(fp)) != EOF){
    if (g == '\n' || g == '\t'){
      ;
    }
    else{
      int x = g;
      freq[x]++;
      count++;
    }
  }

  for (int i = 32; i < 128; i++){
    if (freq[i]!=0){
      distinct++;
    }
  }

  // 2. Store the character frequencies in a heap (priority queue).

  binary_heap heap;
  for (int i = 32; i < 128; i++){
    if(freq[i]!= 0){
      char c = i;
      HuffNode *huff = new HuffNode(c);
      huff->frequency = freq[i];
      heap.insert(huff);
    }
  }


  // 3. Build a tree of prefix codes (a Huffman code) that determines the unique bit codes for each character.

  while(heap.size() != 1){
    HuffNode *min1 = heap.deleteMin();
    HuffNode *min2 = heap.deleteMin();
    HuffNode *T1 = new HuffNode('T');
    T1->left = min1; T1->right = min2;
    T1->frequency = min1->frequency + min2->frequency;
    heap.insert(T1);
  }

  HuffNode *root = heap.findMin();

  // 4. Write the prefix codes to the output file, following the file format above.

  findCodes(root, "");
  cout << "----------------------------------------" << endl;
  

  // 5. Re-read the source file and for each character read, write its prefix code to the output, following the file format described herein.

  int cBits = 0; // Bits in the compressed file
  rewind(fp);
   while( (g = fgetc(fp)) != EOF ){
     cout << asVal[g] << " ";
     cBits += asVal[g].length();
   }
   cout << endl;
  cout << "----------------------------------------" << endl;
  cout << "There are a total of " << count << " symbols that are encoded." << endl;
  cout << "There are " << distinct << " distinct symbols used." << endl;
  cout << "There were " << count * 8 << " bits in the original file." << endl;
  cout << "There were " << cBits << " bits in the compressed file." << endl;
  cout << "This gives a compression ratio of " << (double)count * 8/cBits << endl;
  cout << "The cost of the Huffman tree is " << (double) cBits/count << " bits per character." << endl;
  
  return 0;
  
}
