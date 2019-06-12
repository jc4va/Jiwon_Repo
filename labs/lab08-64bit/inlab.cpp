#include<iostream>
using namespace std;

int passByValue(int a, int b){
  return a + b;
}

int passByReference (int &a, int &b){
  return a + b;
}

int passByPointer (int *a, int *b){
  return *a + *b;
}

float passByFloatValue(float a, float b){
  return a + b;
}

float passByFloatReference (float &a, float &b){
  return a + b;
}

float passByFloatPointers (int *a, int *b){
  return a + b;
}

char passByCharValue(char a, char b){
  return a;
}

char passByCharReference(char &a, char &b){
  return a;
}

char passByCharPointer(char *a, char *b){
  return *a;
}

int both(int a, int *b){
  return a + *b;
}

void array(int A[]){
  A[0] = 5;
  A[1] = 6;
  A[2] = 7;
}

int main(){
  int x = 5; int y = 7;
  int *p = &x; int *p1 = &y;
  return 0;
}
