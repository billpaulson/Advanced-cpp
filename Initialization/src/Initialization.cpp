//============================================================================
// Name        : Initialization.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int value{5};
    cout << value << endl;

    string text{"My text."};
    cout << text << endl;

    int numbers[]{1,2,4,5};
    cout << numbers[2]<< endl;

    int* pInt=new int{99};
    cout << *pInt << endl;

	return 0;
}
