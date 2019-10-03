/*
 * SNode.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: victoriaelizabeth
 */

#include "SNode.hpp"

SNode::SNode(){
	rating = 0;
	comments = "";
	next = NULL;
	cout<< "Please input a rating"<<endl;
	cin>> rating;
	cout<< "Please input your comments"<<endl;
	cin>> comments;
}

SNode::SNode(int r, string c) {
	rating = r;
	comments = c;
	next = NULL;
}

SNode::~SNode (){
	next = NULL;
	cout << "deleting " << rating << ", " << comments << endl;
}

void SNode::printNode(){
	cout<< "Rating: " <<rating<< ", "<<"Comments: " << comments <<endl;
}
