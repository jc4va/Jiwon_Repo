/*
	Name: Jiwon Cha
	ID: jc4va
	Date: 09/13/2017
	Name of the file: postfixCalculator->cpp
*/

#include "stack.h"
#include <iostream>
#include "postfixCalculator.h"
using namespace std;

postfixCalculator::postfixCalculator(){
    s = new stack();
}

void postfixCalculator::pushNum(int x){
	s->push(x);
}

void postfixCalculator::add(){
	int i = s->top();
	s->pop();
	int j = s->top();
	s->pop();
	s->push(i+j);
}

void postfixCalculator::subtract(){
	int i = s->top();
	s->pop();
	int j = s->top();
	s->pop();
	s->push(j-i);
}

void postfixCalculator::divide(){
	int i = s->top();
	s->pop();
	int j = s->top();
	s->pop();
	s->push(j/i);
}

void postfixCalculator::multiply(){
	int i = s->top();
	s->pop();
	int j = s->top();
	s->pop();
	s->push(i*j);
}

void postfixCalculator::negate(){
	int i = s->top();
	s->pop();
	s->push(-i);
}

int postfixCalculator::getTopValue() {
	return s->top();
}
