//============================================================================
// Name        : vector.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> s;

	s.push_back("One");
	s.push_back("Two");
	s.push_back("Three");

	for ( int i=0; i<s.size(); i++){
		cout << s[i] << endl;
	}
	cout << "**********************" << endl;
	for ( auto it=s.begin();it!=s.end();it++){
		cout << *it << endl;
	}

	return 0;
}
