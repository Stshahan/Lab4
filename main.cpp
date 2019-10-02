

#include "book.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "SLL.hpp"
using namespace std;
void printBookArrayInfo(book a [5]);
void sortBookArray(book a [5]);

 int main(void){

	int a [10]= {1,2,2,3,4,5,5,6,7,9};
	int b [10]= {9,9,9,3,9,9,5,9,9,9};
	int c [10]= {1,2,3,3,3,5,5,6,3,3};
	int d [10]= {9,2,2,9,4,5,9,6,9,9};
	int e [10]= {9,9,9,9,9,5,5,6,7,9};
	book bookArray[5];
	book bookA("Miguel De", "Cervantes", "Don Quixote", 1605, a);
	bookArray[0]=bookA;
	book bookB("Lewis", "Carrol", "Through the Looking-Glass", 1871, b);
	bookArray[1]=bookB;
	book bookC ("Marcel", "Proust", "In Search of Lost Time", 1913, c);
	bookArray[2]=bookC;
	book bookD("Junto", "Diaz", "The Brief and Wondrous Life of Oscar Wao", 2007, d);
	bookArray[3]=bookD;
	book bookE("Alexandre", "Dumas", "The Count of Monte Cristo", 1844, e);
	bookArray[4]=bookE;

	cout<<"Book Array Before Sort:"<<endl;
	printBookArrayInfo(bookArray);
	sortBookArray(bookArray);
	cout<< endl;
	cout<<endl;
	cout<<"The Highest Rated Book is:"<< endl;
	bookArray[0].printInfo(bookArray[0]);

	cout << endl;

	book *newBook = new book("Alexandre", "Dumas", "The Count of Monte Cristo", 1844, e);

	newBook->printInfo(*newBook);


	//************Lab 4B**********************
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





 void sortBookArray(book a [5]){
	 book temp = a[0];
	 for(int j=0;j<5;j++)
		 for(int i=j;i<5;i++){
			 if(a[j]>a[i]){
				 temp = a[j];
				 a[j]=a[i];
				 a[i]=temp;
			 }
	 }
 }


 void printBookArrayInfo(book a [5]){
	 for (int i = 0; i<5; i++){
		 a[i].printInfo(a[i]);
	 }
 }


