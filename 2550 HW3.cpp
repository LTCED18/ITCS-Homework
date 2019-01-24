

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArray(int array[], int size);
int seqSearch(const int list[], int listLength, int searchItem, int index);
void insertionSortArray(int list[], int listLength);
void printArray(int list[], int size);

const int ISIZE = 9;
int main()
{
	int search;
    srand(time(nullptr));
	int array[ISIZE] = { {'\0'} };
	//int array2[ISIZE] = { 9, 2, 47, 1, 15, 23, 11, 36, 8 };
	
	
	generateArray(array, ISIZE);

	printArray(array, ISIZE);
	
	insertionSortArray(array, ISIZE);

	printArray(array, ISIZE);

	cout << "Enter search item: ";
	cin >> search;
	cout << endl;

	seqSearch(array, 9, search, 0);
	
	system("pause");
	return 0;

}

void generateArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		int rand_variable = rand() % 1001;
		array[i] = rand_variable;
	}
}

 void insertionSortArray(int list[], int listLength) {

	int i = 1;
	while (i < listLength) { // i increments the loop
		
		int j = i;

		while (j >= 0 && list[j - 1] > list[j]) {
			swap(list[j], list[j-1]);
			j--;
		}
		
		i++;
	}

}

int seqSearch(const int list[], int listLength, int searchItem, int index)
{
	
	if (index < listLength) {
		if (list[index] != searchItem) {
			seqSearch(list, listLength, searchItem, index + 1);
		}
		else if (list[index] == searchItem) {
			cout << "We found " << list[index] << " at position " << index << endl;
			return index;
		}
	} else {
		cout << "Number Was Not Found" << endl;
		return -1;
	}


}

void printArray(int list[], int size) {
	
	for (int i = 0; i < ISIZE; i++) {
		cout << list[i] << " ";
	}
	cout << endl << endl;
}