// HW4_Redo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "inventoryType.h"
#include <string>

using namespace std; 

int main()
{
	// default constructor
	inventoryType inventory1;
	cout << "With default parameters: " << endl << endl;
	cout << inventory1.getPartNumber() << endl;
	cout << inventory1.getPartDescription() << endl;
	cout << inventory1.getPricePerItem() << endl;
	cout << inventory1.getQuantity() << endl;
	cout << inventory1.getInvoiceAmount() << endl << endl;

	//default parameters
	inventoryType inventory2("123", "bolt", 4, 2.0);
	cout << "With default parameters: " << endl << endl;
	cout << inventory1.getPartNumber() << endl;
	cout << inventory1.getPartDescription() << endl;
	cout << inventory1.getPricePerItem() << endl;
	cout << inventory1.getQuantity() << endl;
	cout << inventory1.getInvoiceAmount() << endl << endl;


	/*mutator 
	inventory1.setPartNumber("123");
	inventory1.setPartDescription("bolt");
	inventory1.setQuantity(4);
	inventory1.setPricePerItem(4.50);

	cout << "After Parameters: " << endl << endl;
	cout << inventory1.getPartNumber() << endl;
	cout << inventory1.getPartDescription() << endl;
	cout << inventory1.getPricePerItem() << endl;
	cout << inventory1.getQuantity() << endl;
	cout << inventory1.getInvoiceAmount() << endl << endl;
	*/

	system("pause");
	return 0;
}

