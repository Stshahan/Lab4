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
 first = NULL;
 last = NULL;
}

void SLL:: printSLL(){
	if (first != NULL)
	{
		SNode *node= first;
		for (; node->next != last; node= node->next)
		{
			node-> printNode();
		}
	}

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
	SNode *node = first;

	last->next = newnode;
	last = newnode;

}

void SLL :: addAtFront (int r, string c){
	SNode *newnode = new SNode(r,c);
	SNode *node = first;

	first->next = first;
	first = newnode;

}



