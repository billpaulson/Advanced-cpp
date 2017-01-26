//============================================================================
// Name        : Static.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent{
public:
	virtual void speak(){
		cout << "parent!" << endl;
	}
};

class Brother: public Parent{

};

class Sister: public Parent{

};

int main() {
    float value = 3.23;
    cout << value << endl;
    cout << (int)value << endl;
    cout << int(value) << endl;
    cout << static_cast<int>(value) << endl;

    Parent parent;
    Brother brother;
    Parent *pp = &brother;
    // Brother *pb = static_cast<Brother *>(&parent);// not good idea but works
    Brother *pb = dynamic_cast<Brother *>(&parent);//rtti
    if ( pb == nullptr ){
        cout << "Invalid Cast!" << endl;
    }
    else{
        cout << pb << endl;
    }

    Parent &&p = static_cast<Parent &&>(parent);
    p.speak();

	return 0;
}
