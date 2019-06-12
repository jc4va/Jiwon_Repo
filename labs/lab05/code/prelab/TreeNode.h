// TreeNode.h: TreeNode class definition
// Name: Jiwon Cha
// Computing ID: jc4va
// Date: 10/09/2017
// File name: TreeNode.h
// CS 2150: Lab 5


#ifndef TREENODE_H
#define TREENODE_H

#include <string>
using namespace std;

class TreeNode {
public:
    TreeNode();						//Default Constructor
    TreeNode(const string & val);	//Constructor

private:
    string value;
    TreeNode *left, *right;			// for trees
    friend class TreeCalc;			//gives TreeCalc access to private data
};

#endif
