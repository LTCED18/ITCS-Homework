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
	cout << "With default: " << endl << endl;
	cout << inventory1.getPartNumber() << endl;
	cout << inventory1.getPartDescription() << endl;
	cout << inventory1.getPricePerItem() << endl;
	cout << inventory1.getQuantity() << endl;
	cout << inventory1.getInvoiceAmount() << endl << endl;

	inventory1.setPartNumber("123");
	inventory1.setPartDescription("bolt");
	inventory1.setQuantity(0);
	inventory1.setPricePerItem(4.50);

	cout << "After Parameters: " << endl << endl;
	cout << inventory1.getPartNumber() << endl;
	cout << inventory1.getPartDescription() << endl;
	cout << inventory1.getPricePerItem() << endl;
	cout << inventory1.getQuantity() << endl;
	cout << inventory1.getInvoiceAmount() << endl << endl;
	
//with default parameters
inventoryType inventory2("226", "chainsaw", 2, 3.25);
cout << "With default parameters: " << endl << endl;
cout << inventory2.getPartNumber() << endl;
cout << inventory2.getPartDescription() << endl;
cout << inventory2.getPricePerItem() << endl;
cout << inventory2.getQuantity() << endl;
cout << inventory2.getInvoiceAmount() << endl << endl;



	system("pause");
	return 0;
}

