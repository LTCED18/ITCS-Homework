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

const int MAXSIZE = 10;
const int ROW = 7;
const int COLUMN = 10;

bool loadArray(const string fileName, char days[][COLUMN]);
void printResults(char days[ROW][COLUMN]);

int main()
{
	
	char days[ROW][COLUMN] = { {'\0'} }; // initalizes to null, keeps weird things from printing out in unused parts of the array.
	char daysSorted[MAXSIZE] = { {'\0'} };
	//int n = sizeof(days);

	loadArray("Days_of_the_Week.txt", days);

	for (int i = 0; i < ROW; i++) {

		for (int j = i + 1; j < ROW; j++)
		{
			if (strcmp(days[i], days[j]) > 0)
			{
				strcpy_s(daysSorted, days[i]);
				strcpy_s(days[i], days[j]);
				strcpy_s(days[j], daysSorted);
			}
		}

	}
	 
   printResults (days);

	system("pause");
	return 0;
}

bool loadArray(const string fileName, char days[][COLUMN] ) {
	ifstream inFile;
	char storage;
	inFile.open("Days_of_the_Week.txt");

	if (!inFile) {
		cout << "Error";
		return false;
	}

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			inFile >> storage;
			if (storage == ',') {
				break;
			}
			else {
				days[i][j] = storage;
			}
		}

	}

	inFile.close();

	return true;
}	

void printResults(char days[ROW][COLUMN]) {
	
	for (int i = 0; i < ROW; i++) {
		cout << i + 1 << ": ";
		for (int j = 0; j < COLUMN; j++) {
			if (days[i][j] == '\0') {
				break;
			}
			else {
				cout << days[i][j];
			}
		}

		cout << endl;
	}
}