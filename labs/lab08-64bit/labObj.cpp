#include<iostream>
#include<string>
using namespace std;

class test{
public:
  int getN(){
    return this->n;
  };
  void setN(int x){
    this->n = x;
  };
  int n;
};

int main(){
  test t;
  t.n = 3;
}
