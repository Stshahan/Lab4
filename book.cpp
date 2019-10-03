
/*
 * book.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: stsha
 */
#include "book.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

book::book(){
	 this->firstName = " ";
	 this->lastName = " ";
	 this -> title = " ";
	 this->yearPublished = 0;
	 	for (int i=0; i<10;i++){
		    	this->ratings[i] = 0;
	    	   }
}

book::~book(){
	cout<< "destroyed"<<endl;
}

book::book(string first, string last, string bookName, int year){
	  this->firstName = first;
	  this->lastName = last;
	  this -> title = bookName;
	  this->yearPublished = year;

	    for (int i=0; i<10;i++){
	    	this->ratings[i] = 0;
    	   }
	}
book::book(string first, string last, string bookName, int year, int rate[10]){
	  this->firstName = first;
	  this->lastName = last;
	  this -> title = bookName;
	  this->yearPublished = year;
	  for (int i = 0; i<10; i++){
	  this->ratings[i] = rate[i];
	  }
}

double book::findAvgRating(){
	double total = 0;
	for (int i=0; i<10;i++){
		total = total + this->ratings[i];
	}
	double rating =(double)total/(double)10;
	return rating;
}

void book::printAvgRating(){
	double avgRating = this->findAvgRating();
	if (avgRating>0)
	cout<<"The Average Rating is:" << this->findAvgRating() << endl;
	else
	cout<< "No Ratings Yet"<< endl;
}

void book::printInfo(){
	cout<< "Book Info: " << endl;
	cout << "Title: " << this->title <<endl;
	cout << "Author: " << this->firstName << " " << this->lastName << endl;
	cout << "Year Published: " << this->yearPublished << endl;
	cout << "Rating: ";
	this->printAvgRating();
}

bool book::operator>(book b){
	if (b.findAvgRating() > this->findAvgRating())
		return true;
	else
		return false;
}
