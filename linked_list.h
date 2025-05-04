#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
using  namespace std;
template <typename T >
class Linkedlist {
private:
  struct Node {
    T data;
    Node* next;
    Node(const T& val ) : data(val), next(nullptr) {} };
    Node* head;
public:
Linkedlist();
~Linkedlist();
void push_front(const T& value);
void pop_front();
void display() const;
bool is_empty()const;
int size()const;
};
#endif
