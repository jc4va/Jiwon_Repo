 // Insert your header information here
// Name: Jiwon Cha
// Computing ID: jc4va
// Date: 10/09/2017
// File name: TreeCalc.cpp

// TreeCalc.cpp:  CS 2150 Tree Calculator method implementations

#include "TreeCalc.h"
#include "TreeNode.h"
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

//Constructor
TreeCalc::TreeCalc() {
    mystack = stack<TreeNode*>();
}

//Destructor- frees memory
TreeCalc::~TreeCalc() {
    while (!mystack.empty()){
        mystack.pop();
    }
}

//Deletes tree/frees memory
void TreeCalc::cleanTree(TreeNode* ptr) {
    if (!mystack.empty()){
        cleanTree(ptr->left);
        cleanTree(ptr->right);
    }
    delete ptr;
}

//Gets data from user
void TreeCalc::readInput() {
    string response;
    cout << "Enter elements one by one in postfix notation" << endl
         << "Any non-numeric or non-operator character,"
         << " e.g. #, will terminate input" << endl;
    cout << "Enter first element: ";
    cin >> response;
    cout << response;
    //while input is legal
    while (isdigit(response[0]) || response[0]=='/' || response[0]=='*'
            || response[0]=='-' || response[0]=='+' ) {
        insert(response);
        cout << "Enter next element: ";
        cin >> response;
    }
}

//Puts value in tree stack
void TreeCalc::insert(const string& val) {
    // insert a value into the tree
      if (val == "+" || val == "-" || val == "*" || val == "/" ){
            TreeNode *s_node = new TreeNode(val);
            s_node->right = mystack.top();
            mystack.pop();
            s_node->left = mystack.top();
            mystack.pop();
            mystack.push(s_node);
        }
        else{
            TreeNode *i_node = new TreeNode(val);
            mystack.push(i_node);
        }
}

//Prints data in prefix form
void TreeCalc::printPrefix(TreeNode* ptr) const {
    // print the tree in prefix format
    if (ptr!=NULL){
        cout << ptr->value << " ";
        printPrefix(ptr->left);
        printPrefix(ptr->right);

    }
}

//Prints data in infix form
void TreeCalc::printInfix(TreeNode* ptr) const {
    // print tree in infix format with appropriate parentheses
    if (ptr!=NULL){
        if (ptr->value == "+" || ptr->value == "-" || ptr->value == "*" || ptr->value == "/" ){
            cout << "(";
        }
        printInfix(ptr->left);
        cout << " " << ptr->value << " ";
        printInfix(ptr->right);
        if (ptr->value == "+" || ptr->value == "-" || ptr->value == "*" || ptr->value == "/" ){
            cout << ")";
        }
    }
}

//Prints data in postfix form
void TreeCalc::printPostfix(TreeNode* ptr) const {
    // print the tree in postfix form
  if (ptr!=NULL){
        printPostfix(ptr->left);
        printPostfix(ptr->right);
        cout << ptr->value << " ";
    }
}

// Prints tree in all 3 (pre,in,post) forms

void TreeCalc::printOutput() const {
    if (mystack.size()!=0 && mystack.top()!=NULL) {
        cout << "Expression tree in postfix expression: ";
        printPostfix(mystack.top());
        cout << endl;
        cout << "Expression tree in infix expression: ";
        printInfix(mystack.top());
        cout << endl;
        cout << "Expression tree in prefix expression: ";
        printPrefix(mystack.top());
        cout << endl;
    } else
        cout<< "Size is 0." << endl;
}

//Evaluates tree, returns value
// private calculate() method
int TreeCalc::calculate(TreeNode* ptr) const {
    // Traverse the tree and calculates the result
    int n = 0;
    if (ptr->right!=NULL || ptr->left!=NULL){
        if (ptr->value=="+"){
            n = calculate(ptr->left)+calculate(ptr->right);
          }
        else if (ptr->value=="-"){
            n = calculate(ptr->left)-calculate(ptr->right);
          }
        else if (ptr->value=="/"){
            n = calculate(ptr->left)/calculate(ptr->right);
          }
        else if (ptr->value=="*"){
            n = calculate(ptr->left)*calculate(ptr->right);
          }
      }
      else{
            n = atoi((ptr -> value).c_str());
      }
    return n;
}
//Calls calculate, sets the stack back to a blank stack
// public calculate() method. Hides private data from user
int TreeCalc::calculate() {
    int i = 0;
    while(mystack.size()!=0){
      i+=calculate(mystack.top());
      mystack.pop();}
    return i;
}
