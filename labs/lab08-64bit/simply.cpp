#include<iostream>
#include<string>
using namespace std;

int foo(int x){
  return x+=3;
}

int bar(int &x){
  return x+=3;
}

int main(){
  int h = 3; 
  foo(h);
  bar(h);
}
