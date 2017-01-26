//============================================================================
// Name        : Lambda.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int one{1};
	int two{2};
	int three{3};

	// Capture one and two by value
	[one,two](){cout << one << ", " << two << endl;}();

	// Capture all local var by value
	[=](){cout << one << ", " << two << endl;}();

	// Capture all local var by value three by ref
	[=,&three](){three=7; cout << one << ", " << two << endl;}();
	cout << three << endl;

	// Capture all local var by  ref
	[&](){three=7; two=8; cout << one << ", " << two << endl;}();
	cout << two << endl;

	// Capture all local var by  ref two and three by val
	[&,two,three](){one=100; cout << one << ", " << two << endl;}();
	cout << one << endl;

	return 0;
}
