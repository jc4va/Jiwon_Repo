/*
	Name: Jiwon Cha
	ID: jc4va
	Date: 09/13/2017
	Name of the file: testPostfixCalc.cpp
*/

#include "stack.h"
#include <string>
#include <iostream>
#include "postfixCalculator.h"
using namespace std;

int main() {
  postfixCalculator p;
  string s;
  while(cin >> s) {
	char const * c = s.c_str();
        if (s == "-"){
	    	p.subtract();
	}
        else if (s == "+"){
			p.add();
	}
	else if (s == "/"){
			p.divide();
	}
	else if (s == "*"){
			p.multiply();
	}
        else if (s == "~"){
        	p.negate();
        }
	else {
	  p.pushNum(atoi(c));
	}
    }
    cout << "The result is: " <<p.getTopValue() << endl;
    return 0;
}
