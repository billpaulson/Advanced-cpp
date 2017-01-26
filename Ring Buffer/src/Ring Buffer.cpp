//============================================================================
// Name        : Ring.cpp
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
	    textring.add("Four");

	    for ( int i=0; i<textring.size(); i++ ){
	    	cout << textring.get(i) << endl;
	    }



	return 0;
}
