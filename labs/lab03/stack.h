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
using namespace std;

#ifndef STACK_H
#define STACK_H

class stack{
	public:
		stack();
		void push(int e);
		int top();
		void pop();
		bool empty();

	private:
		List list;
};

#endif