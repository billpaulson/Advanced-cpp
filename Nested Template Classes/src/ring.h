/*
 * ring.h
 *
 *  Created on: Oct 23, 2016
 *      Author: bill
 */

#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<class T>
class ring {
public:
	class iterator;
};

template<class T>
class ring<T>::iterator{
public:
	void print(){
		cout << "Printing test from ring::iterator: " << T() << endl;
	}
};

#endif /* RING_H_ */
