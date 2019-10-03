/*
 * SLL.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: victoriaelizabeth
 */

#include "SLL.hpp"

SLL::SLL(){
first = NULL;
last = NULL;
size = 0;
}

SLL :: ~SLL(){
 SNode *node = first;
 SNode *todelete = NULL;
// for (; node != NULL;) {
//	 cout << "deleting " << node->rating << ", " << node->comments << endl;
//	 todelete = node;
//	 node = node->next;
//	 delete todelete;
// }
 cout << "deleted each node in ll" << endl;
}

void SLL:: printSLL(){
	if (first != NULL)
	{
		SNode *node= first;
		for (; node != NULL; node= node->next)
		{
			node-> printNode();
		}
	}
	cout << endl;
}

void SLL::insertInOrder(int r, string c){
	if(size == 0){
		addFirst(r,c);
	}
	else if (r < first->rating){
		addAtFront(r,c);
	}
	else if (r > last->rating) {
		push(r,c);
	}
	else {
		SNode *newnode = new SNode(r,c);
		SNode *node = first;
		for (; node->next != NULL; node = node->next)
		{
			if (r > node->rating && r < node->next->rating)
			{
				newnode->next = node->next;
				node->next = newnode;
			}
		}
	}
}

void SLL :: push (int r, string c){
	SNode *newnode = new SNode(r,c);
	last->next = newnode;
	last = newnode;
	size++;
}

void SLL :: addAtFront (int r, string c){
	SNode *newnode = new SNode(r,c);
	newnode->next = first;
	first = newnode;
	size++;
}


void SLL :: addFirst (int r, string c) {
	SNode *newnode = new SNode(r,c);
	first = newnode;
	last = newnode;
	size++;
}

int SLL :: pop(){
	int r = last->rating;
	SNode *node = first;
	for (int i = 0; i < size -1; i++) {
		node = node->next;
	}
	delete last;
	last = node;
	last->next = NULL;
	size--;
	return r;
//	SNode *node;
//	SNode *oldLast = last;
//	for (node = first; node->next != last; node=node->next);
//	last = node;
//	int r = oldLast->rating;
//	delete oldLast;
//	size--;
//	return r;
}

double SLL :: getAve(){
	SNode *node = first;
	double average =0;
	double i =0;
	for (node = first; node->next != NULL; node=node->next)
	{
		average += (double)node->rating;
		i += 1;
		//cout << i << ":" << average << endl;
	}
	average = average / size - 1;
	return average;
}



