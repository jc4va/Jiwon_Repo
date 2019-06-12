/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/13/2017
  Name of the file: stack.h
 */

#include<iostream>
#include "List.h"
#include "ListNode.h"
#include "ListItr.h"
#include "stack.h"
using namespace std;

stack::stack(){
	List* list = new List();
	int count = 0;
}

void stack::push(int e){
	list.insertAtTail(e);
}

int stack::top(){
	return list.last().retrieve();
}

void stack::pop(){
	if (list.isEmpty() == false) {
		ListItr itr = list.last();
		list.remove(itr.retrieve());
	}
	else{
		cout << "Error: stack is empty";
	}
}

bool stack::empty(){
	return list.isEmpty();
}
