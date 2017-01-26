//============================================================================
// Name        : Enhanced.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
    auto texts = {"One","Two","Three"};

    for ( auto text:texts){
    	cout << text << endl;
    }

    string chars = "This is a string.";

    for ( auto c:chars ){
    	cout << c << " ";
    }
    cout << endl;

    vector<int> numbers;

    numbers.push_back(5);
    numbers.push_back(9);
    numbers.push_back(7);

    for ( auto n:numbers){
    	cout << n << " ";
    }
    cout << endl;

	return 0;
}
