#include "data_structues/linked_list.h"
#include <iostream>
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr){}
template <typename T>
LinkedList<T>::~LinkedList() {
  while(head != nullptr) {
pop_front();}}

template < typename T>
void LinkedList<T>::push_front(const T&value) {
  Node* new_node = new Node(value);
new_node->next = head;
head = new_node;
}

template <typename T>
void LinkedList<T>
