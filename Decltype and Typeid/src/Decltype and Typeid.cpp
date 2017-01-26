//============================================================================
// Name        : Decltype.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;

	cout << name << endl;

	return 0;
}
