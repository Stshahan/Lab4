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
book(string first, string last, string bookName, int year);
book(string first, string last, string bookName, int year, int rate[10]);
void printAvgRating(int rate[10]);
double findAvgRating(int rate[10]);
};



