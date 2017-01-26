//============================================================================
// Name        : List.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	for ( auto it=numbers.begin(); it!=numbers.end(); it++ ){
		cout << *it << endl;
	}

	return 0;
}
