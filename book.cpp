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

book::book(string first, string last, string bookName, int year){
	  this->firstName = first;
	  this->lastName = last;
	  this -> title = bookName;
	  this->yearPublished = year;
	  int rated[10]{0};
	    for (int i=0; i<10;i++){
		   cout<< rated[i]<<endl;
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

double findAvgRating(int rate[10]){
	int total = 0;
	for (int i=0; i<10;i++){
		total = total + rate[i];
	}
	return total/10;
}

void printAvgRating(int rate[10]){
	double avgRating = findAvgRating(rate);
	if (avgRating>0)
	cout<<"The Average Rating is:" << findAvgRating(rate) << endl;
	else
	cout<< "No Ratings Yet"<< endl;
}

