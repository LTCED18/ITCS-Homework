// char_practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	ifstream inFile;

	inFile.open("day_name.txt");
	char days[7][10] = { {'\0'} };

	if (!inFile) {
		cout << "Error";
	}
	char storage;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 10; j++) {
			inFile >> storage;
			if (storage == ',') {
				break;
			}
			else {
				days[i][j] = storage;
			}
		}
		
	}

	for (int i = 0; i < 7; i++) {
		cout << i + 1 << ": ";
		for (int j = 0; j < 10; j++) {	
				cout << days[i][j];
		}

		cout << endl;
	}

	cout << endl;

	inFile.close();

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
