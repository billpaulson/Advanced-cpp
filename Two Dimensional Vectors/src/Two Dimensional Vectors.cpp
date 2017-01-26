//============================================================================
// Name        : Two.cpp
// Author      : Bill
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector< vector<int> > grid(12,vector<int>(12,0));

	for ( auto row=0; row<grid.size();row++){
		for ( auto col=0; col<grid[row].size(); col++ ){
			grid[row][col]=(row+1)*(col+1);
			cout << grid[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
