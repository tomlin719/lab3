#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
#include "Cows.h"

using namespace std;

int main(){
	ifstream inFile("infile.in");
	Cows c;
	int size, w;

	inFile >> size;
	vector<int> weight(size);
	int i;

	for(i=0; i<size; i++){
		inFile >> w;
		weight[i]=w;
	}

	c.insertion_sort(weight);

	int j, temp=0;
	for(j=size; j>size-6; j--)
		temp = temp + weight[j];
	cout << temp << endl;

	return 0;
}
