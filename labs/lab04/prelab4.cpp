/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/17/2017
  Name of the file: prelab4.cpp
 */

#include<iostream>
#include<limits>
#include<cmath>
using namespace std;

void sizeOfTest(){
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of int*: " << sizeof(int*) << endl;
	cout << "Size of char*: " << sizeof(char*) << endl;
	cout << "Size of double*: " << sizeof(double*) << endl;
}

void outputBinary(unsigned int x) {
	for (int i = 31; i >= 0; i--) {
		if (pow(2,i)> x){
			cout << "0";
		}
		else{
			cout << "1";
			x = x - pow(2,i);
		}
	}
	cout << endl;
}

void overflow(){
	unsigned int x = 4294967295;
	x = x + 1;
	cout << x << endl;
	cout << "Because UINT_MAX is all 1s in binary, " << 
	"when you add 1 to it, the binary addition " <<
	"will make it 1 followed by 32 zeros and it only reads "
	"32 zeros and the 33rd number is 1 so it's thrown out" << endl;
}

int main(){
	sizeOfTest();
	outputBinary(72);
	outputBinary(5);
	overflow();
}