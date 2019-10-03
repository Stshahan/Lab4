
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

book::book(){//No arg constructor
	 this->firstName = " ";
	 this->lastName = " ";
	 this -> title = " ";
	 this->yearPublished = 0;
	 	for (int i=0; i<10;i++){
		    	this->ratings[i] = 0;
	    	   }
}

book::~book(){//destructor
	cout<< "  ";
}

book::book(string first, string last, string bookName, int year){
	//4 arg constructor, sets rating array to all zeros
	  this->firstName = first;
	  this->lastName = last;
	  this -> title = bookName;
	  this->yearPublished = year;

	    for (int i=0; i<10;i++){
	    	this->ratings[i] = 0;
    	   }
	}
book::book(string first, string last, string bookName, int year, int rate[10]){
	//5 arg constructor, takes in ratings
	  this->firstName = first;
	  this->lastName = last;
	  this -> title = bookName;
	  this->yearPublished = year;
	  for (int i = 0; i<10; i++){
	  this->ratings[i] = rate[i];
	  }
}

double book::findAvgRating(){
	//gives the average rating for the book based on all items in the ratings array.
	double total = 0;
	for (int i=0; i<10;i++){
		total = total + this->ratings[i];
	}
	double rating =(double)total/(double)10;
	return rating;
}

void book::printAvgRating(){
	//calls findAvgRating to print the avg rating
	double avgRating = this->findAvgRating();
	if (avgRating>0)
	cout<<"The Average Rating is:" << this->findAvgRating() << endl;
	else
	cout<< "No Ratings Yet"<< endl;
}

void book::printInfo(){
	//prints the book's title, author, year published and rating.

	cout<< "Book Info: " << endl;
	cout << "Title: " << this->title <<endl;
	cout << "Author: " << this->firstName << " " << this->lastName << endl;
	cout << "Year Published: " << this->yearPublished << endl;
	cout << "Rating: ";
	this->printAvgRating();
}

bool book::operator>(book b){
	//overloaded > operator compares books based on rating.
	if (b.findAvgRating() > this->findAvgRating())
		return true;
	else
		return false;
}
