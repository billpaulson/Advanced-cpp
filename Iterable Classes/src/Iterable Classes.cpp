//============================================================================
// Name        : Iterable.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {

	    ring<string> textring(3);

	    textring.add("One");
	    textring.add("Two");
	    textring.add("Three");
//	    textring.add("Four");

	    // if make this for work then next will also work
	    for ( ring<string>::iterator it=textring.begin();it!=textring.end();it++){
	    	cout << *it << endl;
	    }


	    for ( auto value:textring ){
	    	cout << value << endl;
	    }



	return 0;
}
