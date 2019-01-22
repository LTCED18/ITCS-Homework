// 2550 HW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void generateArray(int array[], int size);
int seqSearch(const int list[], int listLength, int searchItem);

const int ISIZE = 10;
int main()
{
	int search;
	srand(time(nullptr));
	int array[ISIZE] = { {'\0'} };
	
	generateArray(array, ISIZE);

	cout << "Enter search item: ";
	cin >> search;
	cout << endl;

	seqSearch(array, 10, search);
	/*for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}*/

	system("pause");
	return 0;

}

void generateArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int rand_variable = rand() % 1001;
		array[i] = rand_variable;
	}
}

int seqSearch(const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;
	loc = 0;
		if (list[loc] == searchItem && list[loc] < listLength)
			found = true;
		else
			loc++;
			seqSearch(list, listLength, searchItem);
		    
		    

	if (found) {
		cout << "We found " << list[loc] << endl;
		return loc;
	
	}
	else {
		cout << "number was not found" << endl;
		return -1;
		
	}
}
