//============================================================================
// Name        : Capturing.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
private:
	int one{1};
	int two{2};
public:
public:
	void run(){
		int three{3};
		int four{4};

		auto pLamda = [this, three,four](){
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};

		pLamda();
		// = w/this would fail no by val but ref ok
		auto pLamda2 = [&,this](){
			one = 111;
			three = 112;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};

		pLamda2();

		cout << one << endl;
		cout << two << endl;
		cout << three << endl;
		cout << four << endl;

	}
};

int main() {
	Test test;
	test.run();


	return 0;
}
