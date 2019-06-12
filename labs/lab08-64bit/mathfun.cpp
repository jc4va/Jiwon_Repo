// Name: Jiwon Cha
// ID: jc4va
// Date: 10/30/17
// File: mathfun.cpp

#include<iostream>
#include<string>
using namespace std;

extern "C" int power (int x, int y);
extern "C" int product (int x, int y);

int main () {
  int x, y;
  cout << "Enter two positive integers: " << endl;
  cin >> x; cin >> y;

  if (x < 1 || y < 1) {
    cerr << "Numbers must be positive.\n";
    return 1;
  }

  cout << "Product of two integers: ";
  cout << product(x,y) << endl;

  cout << "Power of two integers: ";
  cout << power(x,y) << endl;
  
  return 0;
}
