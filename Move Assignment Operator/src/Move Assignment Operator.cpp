//============================================================================
// Name        : Move.cpp
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
    int *_pBuffer{nullptr};
public:

public:
	Test(){
		_pBuffer = new int[SIZE]{};
	}
	Test(int i){
		_pBuffer = new int[SIZE]{};

		for ( auto j=0; j<i; j++){
			_pBuffer[i]=7*i;
		}
	}
	Test(const Test &other){
		_pBuffer = new int[SIZE]{};

		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
	}
	Test(Test &&other){
		cout << "Move constructor." << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
		//memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
	}
	~Test(){
		delete [] _pBuffer;
	}

	Test &operator=(const Test &other){
		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
		return *this;
	}

	Test &operator=(Test &&other){
		cout << "Move Assignment Operator." << endl;
		delete _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
		return *this;
	}
	friend ostream &operator<<(ostream &out,const Test &test);
};

Test getTest(){
	return Test();
}

ostream &operator<<(ostream &out,const Test &test){
	return out;
}

int main() {
	vector<Test> vec;
	vec.push_back(Test());

	Test test;
	test = getTest();


	return 0;
}
