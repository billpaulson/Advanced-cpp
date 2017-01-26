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
private:
	int m_pos;
	int m_size;
	T *m_values;
public:
	class iterator;

public:
	ring(int size):m_pos(0),m_size(size),m_values(NULL){
		m_values = new T[size];
	}
	~ring(){
		delete [] m_values;
	}
	int size(){
		return m_size;
	}
	void add(T val){
		m_values[m_pos++]=val;
		if ( m_pos == m_size ){
			m_pos = 0;
		}
	}
	T &get(int i){
		return m_values[i];
	}
};

template<class T>
class ring<T>::iterator{
public:
	void print(){
		cout << "Printing test from ring::iterator: " << T() << endl;
	}
};

#endif /* RING_H_ */
