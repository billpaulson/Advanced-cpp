//============================================================================
// Name        : Reinterpret.cpp
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

    Parent parent;
    Brother brother;
    Sister sister;
    Parent *pp = &brother;
    // Brother *pb = static_cast<Brother *>(&parent);// not good idea but works
    Sister *pb = reinterpret_cast<Sister *>(pp);//rtti
    if ( pb == nullptr ){
        cout << "Invalid Cast!" << endl;
    }
    else{
        cout << pb << endl;
    }

	return 0;
}
