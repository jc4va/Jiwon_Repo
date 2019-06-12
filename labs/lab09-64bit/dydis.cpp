#include<iostream>
using namespace std;

class A{
public:
  virtual int add(int x){return x+30;};
  virtual int subtract(int x){return x-70;};
  int multiply(int x){return x*1;};
  int remainder (int x){return x;};
};

class B: public A{
public:
  virtual int add(int x){return x+60;};
  int subtract(int x){return x-140;};
  virtual int multiply(int x){return x*2;};
  int remainder (int x){return x%2;};
};

int main(){
  A *hi = new B();
  B *hi2 = new B();
  hi->add(0);
  hi->subtract(0);
  hi->multiply(1);
  hi->remainder(2);
}
