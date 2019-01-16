// char_practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
#include <stdio.h>
#include <errno.h>
using namespace std;

int main()
{
	ifstream inFile;
	char storage;
	char days[7][2] = { {'\0'} };
	char daysSorted[2] = { {'\0'} };
	int n = sizeof(days);

	inFile.open("day_name.txt");

	if (!inFile) {
		cout << "Error";
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 2; j++) {
			inFile >> storage;
			if (storage == ',') {
				break;
			}
			else {
				days[i][j] = storage;
			}
		}

	}

	for (int j = 0; j < n; j++){
	
		for (int i = j + 1; i < 7; i++)
		{
			if (strcmp(days[j], days[i]) > 0)
			{
				strcpy_s(daysSorted, days[j]);
				strcpy_s(days[j], days[i]);
				strcpy_s(days[i], daysSorted);
			}
		}
	
}

	for (int i = 0; i < 7; i++) {
		cout << i + 1 << ": ";
		for (int j = 0; j < 2; j++) {
			if (days[i][j] == ' ') {
				break;
			}
			else {
				cout << days[i][j];
			}
		}

		cout << endl;
	}

	cout << endl;

	inFile.close();

	system("pause");
	return 0;
}
