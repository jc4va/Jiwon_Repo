#include<iostream>
using namespace std;

int foo(int a){
  for (int i = 0; i < 5; i++){
    a += i;
  }
  return a;
}

int main(){
  foo(3);
}
