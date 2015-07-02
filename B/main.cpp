#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include "Cows.h"
#include "Clock.h"

using namespace std;

int main(){
	Clock clk;
	Cows c;
        int size;
        srand(time(NULL));
        cout << "enter the sorting size(ex. 1000, 10000, 100000): ";
        cin >> size;
	vector<int> weight(size), weight_2;

	int j, random;
	for(j=0; j<size; j++){
		random=rand()%size+1;
		weight[j]=random;
	}

	weight_2=weight;
	clk.start();
	sort(weight.begin(), weight.end());
	cout << "sort(): " << fixed << clk.getElapsedTime() << " seconds."<< endl;
	cout << "weight/wieght_2 are " << ((weight==weight_2)?"the same.\n":"different.\n");
        clk.start();
        c.insertion_sort(weight_2);
        cout << "insertion_sort(): " << fixed << clk.getElapsedTime() << " seconds."<< endl;
        cout << "weight/wieght_2 are " << ((weight==weight_2)?"the same.\n":"different.\n");

	

	return 0;
}
