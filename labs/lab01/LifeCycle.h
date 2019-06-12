/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 08/29/2017
  Name of the file: TestLifeCycle.cpp
 */

#ifndef LIFECYCLE_H
#define LIFECYCLE_H
#include <string>
#include <iostream>
using namespace std;

class MyObject {
public:
    static int numObjs;
    MyObject(const char *n = "--default--");      // default constructor
    MyObject(const MyObject& rhs);                // copy constructor
    ~MyObject();                                  // destructor
    string getName() const {
        return name;
    }
    void setName(const string newName) {
        name = newName;
    }
    friend ostream& operator<<(ostream& output, const MyObject& obj);
private:
    string name;
    int id;
};

//---------------------------------------------------------- prototypes
MyObject getMaxMyObj(const MyObject o1, const MyObject o2); 
int cmpMyObj(const MyObject o1, const MyObject o2);
void swapMyObj(MyObject& o1, MyObject& o2);

#endif
