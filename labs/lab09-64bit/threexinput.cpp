/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 11/13/17
  Filename: threexplusone.s

 */
#include<iostream>
#include "timer.h"
using namespace std;

extern "C" int threexplusone(int x);

int main(){
  unsigned int x, n;
  cout << "Enter a number: " << endl;
  cin >> x;
  cout << "Enter the number of times to call the subroutine: " << endl;
  cin >> n;

  timer t;
  t.start();
  for (int i = 0; i < n; i++){
    threexplusone(x);
  }
  t.stop();
  
  cout << "Number of steps taken: " << threexplusone(x) << endl;
  cout << "Average time taken per function call: " << t.getTime()/n << endl;
}
