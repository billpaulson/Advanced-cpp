//============================================================================
// Name        : Lambda.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void testGreet(void (*greet)(string)){
	greet("Winky");
}

void testdiv(double(*divide)(double,double)){
	cout << divide(10.0,5.0) << endl;
	cout << divide(9.0,3.0) << endl;
}

int main() {
	auto pGreet = [](string name){cout << "Hello " << name << endl;};

	pGreet("Sam");

	testGreet(pGreet);

	// trailing return type is necessary to fix confusion from return of int
	auto pDiv = [](double a, double b) -> double{
		if ( b==0.0 )
			return 0;
		return a/b;
	};

	cout << pDiv(10.0, 5.0) << endl;

	testdiv(pDiv);

	return 0;
}
