//============================================================================
// Name        : Functional.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string &test){
	return test.size()==3;
}

class Check{
public:
	bool operator()(string &test){
		return test.size()==5;
	}
} check1;

void run(function<bool(string&)> check){
	string test="stars";
	cout << check(test) << endl;
}

int main() {
	vector<string> vec{"one","two","three"};

	int size = 5;

	auto lambda = [size](string test){return test.size()==size;};

	auto count = count_if(vec.begin(),vec.end(), lambda);
	cout << count << endl;

	auto count2 = count_if(vec.begin(),vec.end(), check);
	cout << count2 << endl;

	auto count3 = count_if(vec.begin(),vec.end(), check1);
	cout << count3 << endl;

	run(lambda);
	run(check);
	run(check1);

	function<int(int,int)> add = [](int a,int b){return a+b;};
	cout << add(7,3) << endl;

	return 0;
}
