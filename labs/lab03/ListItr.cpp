/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/07/2017
  Name of the file: ListItr.cpp
 */

#include<iostream>
#include "ListNode.h"
#include "ListItr.h"
using namespace std;

ListItr::ListItr(){
  current = NULL;
}

ListItr::ListItr(ListNode* theNode) {
  current = theNode;
}

bool ListItr::isPastEnd() const {
  if (current->next == NULL) {
    return true;
  }
  return false;
}

bool ListItr::isPastBeginning() const {
  if (current->previous == NULL) {
    return true;
  }
  return false;
}

void ListItr::moveForward() {
  current = current->next;
}

void ListItr::moveBackward() {
  current = current->previous;
}

int ListItr::retrieve() const {
  return current->value;
}
