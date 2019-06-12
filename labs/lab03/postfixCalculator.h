/*
	Name: Jiwon Cha
	ID: jc4va
	Date: 09/13/2017
	Name of the file: postfixCalculator.h
*/

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include "stack.h"
#include <iostream>
using namespace std;

class postfixCalculator{
public:
	postfixCalculator();
	void pushNum(int x);
	void add();
	void subtract();
	void divide();
	void multiply();
	void negate();
	int getTopValue();
private:
    stack* s;
};

#endif
