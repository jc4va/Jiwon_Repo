/*
  Name: Jiwon Cha
  ID: jc4va
  Date: 09/07/2017
  Name of the file: List.cpp
 */

#include<iostream>
#include "List.h"
#include "ListItr.h"
using namespace std;

List::List() {
  count = 0;
  head=new ListNode;
  tail=new ListNode;
  head->previous = NULL;
  head->next=tail;
  tail->next=NULL;
  tail->previous=head;
}

List::List(const List& source) {      // Copy Constructor
    head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {       // deep copy of the list
        insertAtTail(iter.retrieve());
        iter.moveForward();
    }
}

List::~List() {
  makeEmpty();
  delete head;
  delete tail;
}

List& List::operator=(const List& source) { //Equals operator
    if (this == &source)
        return *this;
    else {
        makeEmpty();
        ListItr iter(source.head->next);
        while (!iter.isPastEnd()) {
            insertAtTail(iter.retrieve());
            iter.moveForward();
        }
    }
    return *this;
}

bool List::isEmpty() const {
  return (count == 0);
}

void List::makeEmpty() {
  ListItr l = first();
  while(l.isPastEnd()==false){
    int s = l.current->value;
    l.moveForward();
    remove(s);
  }
}

ListItr List::first() {
  ListItr *itr = new ListItr(head);
  itr->moveForward();
  return *itr;
}

ListItr List::last() {
  ListItr *itr = new ListItr(tail);
  itr->moveBackward();
  return *itr;
}

void List::insertAfter(int x, ListItr position) {
  ListNode* n = (ListNode*) malloc(sizeof(ListNode));
  n->value = x;
  n->previous = position.current;
  n->next = position.current->next;
  position.current->next->previous = n;
  position.current->next = n;
  count++;
}

void List::insertBefore(int x, ListItr position){
  ListNode* n = (ListNode*) malloc(sizeof(ListNode));
  n->value = x;
  n->next = position.current;
  n->previous = position.current->previous;
  position.current->previous = n;
  position.current->previous->next = n;
  count++;
}

void List::insertAtTail(int x) {
  ListNode* n = (ListNode*) malloc(sizeof(ListNode));
  n->value = x;
  n->previous = tail->previous;
  n->next = tail;
  tail->previous->next = n;
  tail->previous = n;
  count++;
}

void List::remove(int x) {
  ListItr s = find(x);
  ListNode *i = s.current;
  i->next->previous=i->previous;
  i->previous->next=i->next;
  delete i; count--;
  // note:i->next = (*i).next //
}

ListItr List::find(int x) {
  ListItr l = first();
  while (l.isPastEnd() == false) {
    if (l.retrieve() == x) {
      return l;
    }
    else {
      l.moveForward();
    }
  }
  ListItr *t = new ListItr(tail);
  return *t;
}

int List::size() const {
  return count;
}

void printList(List& source, bool direction) {
  if (direction == true) {
    ListItr l = source.first();
    cout << "{" << endl;
    while(l.isPastEnd() == false){
      cout << l.retrieve() << " " << endl;
      l.moveForward();
    }
    cout << "}" << endl;
  }
  else {
    ListItr l = source.last();
    cout << "{" << endl;
    while(l.isPastBeginning() == false){
      cout << l.retrieve() << " " << endl;
      l.moveBackward();
    }
    cout << "}" << endl;
  }
}
