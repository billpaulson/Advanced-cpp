//============================================================================
// Name        : Object.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
	int id{3};
	string name{"Bill"};
public:
	Test()=default;// next constructor Test(int id) causes default
	// constructor to go away this returns it
	Test(const Test &other) = default; // = delete; does away with copy const.
	Test(int id):id(id){

	}
	void print(){
		cout << id << " : " << name << endl;
	}
};

int main() {
	Test test;
	test.print();

	Test test1(77);
	test1.print();

	Test test2 = test1;
	test2 = test;

	return 0;
}
