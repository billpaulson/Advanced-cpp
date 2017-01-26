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
	iterator begin(){
		return iterator(0, *this);
	}
	iterator end(){
		return iterator(m_size, *this);
	}
};

template<class T>
class ring<T>::iterator{
private:
	int m_pos;
	ring &m_ring;
public:
	iterator(int pos, ring &aRing):m_pos(pos),m_ring(aRing){

	}
	void print(){
		cout << "Printing test from ring::iterator: " << T() << endl;
	}

	iterator &operator++(int){
		m_pos++;
		return *this;
	}
	iterator &operator++(){
		m_pos++;
		return *this;
	}
	T &operator*(){
		return m_ring.get(m_pos);
	}
	bool operator!=(const iterator &other) const {
		return m_pos != other.m_pos;
	}
};

#endif /* RING_H_ */
