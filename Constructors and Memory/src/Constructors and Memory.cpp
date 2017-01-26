//============================================================================
// Name        : Constructors.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test{
private:
	static const int SIZE{100};
    int *_pBuffer;
public:

public:
	Test(){
		cout << "Constructor" << endl;
		_pBuffer = new int[SIZE]{};
	}
	Test(int i){
		cout << "Parameterized Constructor" << endl;
		_pBuffer = new int[SIZE]{};

		for ( auto j=0; j<i; j++){
			_pBuffer[i]=7*i;
		}
	}
	Test(const Test &other){
		cout << "Copy Constructor" << endl;
		_pBuffer = new int[SIZE]{};

		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
	}
	~Test(){
		cout << "Destructor" << endl;
		delete [] _pBuffer;
	}

	Test &operator=(const Test &other){
		cout << "Assignment" << endl;
		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
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
