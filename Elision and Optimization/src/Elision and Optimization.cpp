//============================================================================
// Name        : Elision.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Test{
private:

public:

public:
	Test(){
		cout << "Constructor" << endl;
	}
	Test(int i){
		cout << "Parameterized Constructor" << endl;
	}
	Test(const Test &other){
		cout << "Copy Constructor" << endl;
	}
	~Test(){
		cout << "Destructor" << endl;
	}

	Test &operator=(const Test &other){
		cout << "Assignment" << endl;
		return *this;
	}

	friend ostream &operator<<(ostream &out,const Test &test);
};

Test getTest(){
	return Test();
}

ostream &operator<<(ostream &out,const Test &test){
	out << "Hello from test";
	return out;
}

int main() {
	Test test1 = getTest();
	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	return 0;
}
