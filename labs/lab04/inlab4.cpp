/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/19/2017
  Name of the file: inlab4.cpp
 */

#include<iostream>
#include<climits>
#include<cfloat>
#include<cmath>
using namespace std;



int main(){
	// size in bytes
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of int*: " << sizeof(int*) << endl;
	cout << "Size of char*: " << sizeof(char*) << endl;
	cout << "Size of double*: " << sizeof(double*) << endl;

	// Max values (base 10)
	cout << "Max of int: " << INT_MAX << endl;
	cout << "Max of unsigned int: " << UINT_MAX << endl;
	cout << "Max of float: " << FLT_MAX << endl;
	cout << "Max of double: " << DBL_MAX << endl;
	cout << "Max of char: " << CHAR_MAX << endl;
	cout << "Max of bool: " << 1 << endl;
	cout << "Max of int*: " << sizeof(int*) << endl;
	cout << "Max of char*: " << sizeof(char*) << endl;
	cout << "Max of double*: " << sizeof(double*) << endl;

	// zero stored 
	int a = 0;
	unsigned int b = 0;
	float c = 0;
	double d = 0;
	char e = '0';
	bool f = false;

	// zero stored 
	int a1 = 1;
	unsigned int b1 = 1;
	float c1 = 1.0;
	double d1 = 1.0;
	char e1 = '1';
	bool f1 = true;

	// Null value
	int *g = NULL;
	char *h = NULL;
	double *j = NULL;

	// primitive
	int IntArray[10] = {0,1,2,3,4,5,6,7,8,9};
	char CharArray[10] = {'a','b','c','d','e','f','g','h','i'};

	int IntArray2D[6][5] = {
	  {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},
	  {16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}
	};
	
	char CharArray2D[6][5] = {
	  {'a','b','c','d','e'},
	  {'f','g','h','i','j'},
	  {'k','l','m','n','o'},
	  {'p','q','r','s','t'},
	  {'u','v','w','x','y'},
	  {'z','b','c','d','e'}
	};


}
