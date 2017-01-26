//============================================================================
// Name        : Initializer.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test{
public:
	Test(initializer_list<string> texts){
		for ( auto value:texts){
			cout << value << endl;
		}
	}
	void print(initializer_list<string> texts){
		for ( auto value:texts){
			cout << value << endl;
		}
	}
};

int main() {
    vector<int> numbers{1,2,3,4,6};
    cout << numbers[3] << endl;

    Test test{"apple","orange","banana"};
    test.print({"One","Two","Three","Four"});

	return 0;
}
