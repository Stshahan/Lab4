/*
 * SNode.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: victoriaelizabeth
 */

#include "SNode.hpp"

SNode::SNode(){
	cout<< "Please input a rating"<<endl;
	cin>> rating;
	cout<< "Please input your comments"<<endl;
	cin>> comments;
}

SNode::SNode(int r, string c) {
	rating = r;
	comments = c;

}

SNode::~SNode (){
	next = NULL;
}

void SNode::printNode(){
	cout<< rating << comments <<endl;
}
