

#include "book.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "SLL.hpp"
using namespace std;


 int main(void){
	string first = "Shaun";
	string last = "Shahan";
	string bookName = "CISC220";
	int year=1935;

	book a (first, last, bookName, year);

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
