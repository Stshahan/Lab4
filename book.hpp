/*
 * book.hpp
 *
 *  Created on: Sep 25, 2019
 *      Author: stsha
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;


class book{

private:
	string firstName;
	string lastName;
	string title;
	int yearPublished;
	int* ratings = new int[10];

public:
book();
book(string first, string last, string bookName, int year); // overloaded constructor.
book(string first, string last, string bookName, int year, int rate[10]);//overloaded constructor
~book();// book destructor
void printAvgRating();
double findAvgRating();
void printInfo();
bool operator>(book b);

};




