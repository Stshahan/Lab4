

#include "book.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "SLL.hpp"
using namespace std;
void ratingGenerator(int rate[10]);
void printBookArrayInfo(book a [5]);
void sortBookArray(book a [5]);

 int main(void){

/*	int a [10];
	ratingGenerator(a);
	book bookArray[5];
	book bookA("Miguel De", "Cervantes", "Don Quixote", 1605, a);
	ratingGenerator(a);
	book bookB("Lewis", "Carrol", "Through the Looking-Glass", 1871, a);
	ratingGenerator(a);
	book bookC ("Marcel", "Proust", "In Search of Lost Time", 1913, a);
	ratingGenerator(a);
	book bookD("Junto", "Diaz", "The Brief and Wondrous Life of Oscar Wao", 2007, a);
	ratingGenerator(a);
	book bookE("Alexandre", "Dumas", "The Count of Monte Cristo", 1844, a);


	cout<<"Book Array Before Sort:"<<endl;
	printBookArrayInfo(bookArray);
	sortBookArray(bookArray);
	cout<<"Book Array After Sort:"<<endl;
	printBookArrayInfo(bookArray);



	*///************Lab 4B**********************
	int r[10] = {9,8,4,5,11,10,3,6,8,2};
	string s[10] = {"really good!","loved it","mediocre", "okay, not great","best book ever!", "awesome!","boring","not bad","definitely worth reading", "terrible!"};
	SLL *list = new SLL();
	for (int i = 0; i < 10; i++) {
	list->insertInOrder(r[i],s[i]);
	list->printSLL();
	}
	cout << "Ave: "<< list->getAve() << endl;
	cout << "Popping " << list->pop() << endl;
	list->printSLL();
	cout << "Popping " << list->pop() << endl;
	list->printSLL();
	delete list;
	return 0;
}




 void ratingGenerator(int rate[10]){
 	 srand(time(NULL));
 	 for(int i=0; i<10;i++){
 	 rate[i]=rand()%11;//sets x equal to a random number between 1 & 10 excluding 50
 	 }
 }

 void sortBookArray(book a [5]){
	 book temp = a[0];
	 for(int j=0;j<5;j++)
		 for(int i=j;i<5;i++){
			 if(a[i]>a[j]){
				 temp = a[j];
				 a[j]=a[i];
				 a[i]=temp;
			 }
	 }
 }


 void printBookArrayInfo(book a [5]){
	 for (int i = 0; i<5; i++){
		 a[i].printInfo();
	 }
 }


