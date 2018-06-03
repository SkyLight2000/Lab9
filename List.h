#pragma once
#include "stdafx.h"

template <class T>
struct Node {
	T x;
	Node *Next;
	Node *Prev;
};

template <class T>
class List {
	Node<T> *Head;
	Node<T> *Tail;
public:
	List() :Head(NULL), Tail(NULL) {};
	~List();
	void Show();
	void Add(T x);
};

template <class T>
List<T>::~List() {
	while (Head) {
		Tail = Head->Next;
		delete Head;
		Head = Tail;
	}
}

template <class T>
void List<T>::Add(T x) {
	Node<T> *temp = new Node<T>;
	temp->Next = NULL;
	temp->x = x;
	if (Head != NULL) {
		temp->Prev = Tail;
		Tail->Next = temp;
		Tail = temp;
	}
	else {
		temp->Prev = NULL;
		Head = Tail = temp;
	}
}

template <class T>
void List<T>::Show() {
	Node<T> *temp = Tail;
	while (temp != NULL) {
		cout << temp->x << " ";
		temp = temp->Prev;
	}
	cout << "\n";
	temp = Head;
	while (temp != NULL) {
		cout << temp->x << " ";
		temp = temp->Next;
	}
	cout << "\n";
}
