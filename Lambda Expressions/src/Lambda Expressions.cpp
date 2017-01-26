//============================================================================
// Name        : Lambda.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(void(*pFunc)()){
	pFunc();
}

int main() {

	auto func = [](){cout << "Hello from Lambda expression" << endl;};

	func();

	test(func);

	test([](){cout << "Hello again from Lambda expression" << endl;});

	return 0;
}
