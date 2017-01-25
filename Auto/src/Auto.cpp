//============================================================================
// Name        : Auto.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
auto test(T value) -> decltype(value){
	return value;
}

template<class T,class U>
auto test(T value1, U value2) -> decltype(value1+value2){
	return value1+value2;
}

int get(){
	return 999;
}

auto test2() -> decltype(get()){
	return get();
}


int main() {
    auto val=7;

    cout << val << endl;

    cout << test(val) << endl;

    cout << test("Hello!") << endl;

    cout << test(4,5) << endl;

    string str1 = "Hello";
    string str2 = " there";
    cout << test(str1, str2) << endl;

    cout << test2() << endl;

	return 0;
}
