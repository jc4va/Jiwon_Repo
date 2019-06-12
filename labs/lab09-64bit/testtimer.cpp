#include<iostream>
#include "timer.h"
using namespace std;

int main(){
  timer t;
  int a, b, c;
  t.start();
  a = 5; b = 5;
  c = a * b;
  cout << c << endl;
	       t.stop();
	       cout << t.getTime();
}
