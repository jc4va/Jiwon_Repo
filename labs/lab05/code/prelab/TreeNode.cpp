// Insert your header information here
// Name: Jiwon Cha
// Computing ID: jc4va
// Date: 10/09/2017
// File name: TreeNode.cpp
// TreeNode.cpp:  Tree Node method implementations
// CS 2150: Lab 5

#include "TreeNode.h"

//Default Constructor -left and right are NULL, value '?'
TreeNode::TreeNode() {
    value="?";
    left=NULL;
    right=NULL;
}

//Constructor - sets value to val
TreeNode::TreeNode(const string & val) {
    value=val;
    left=NULL;
    right=NULL;
}
