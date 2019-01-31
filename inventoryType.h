#pragma once
#include <string>

using namespace std;

class inventoryType
{
public:
	//Default parameters//
	inventoryType();
	inventoryType(string, string, int, double); // instantiated with parameters and reverts to default if does not meet criteria.

	//get functions
	string getPartNumber() const;
	string getPartDescription() const;
	int getQuantity() const;
	double getPricePerItem() const;
	double getInvoiceAmount();

	//mutator functions for each data member
	void setPartNumber(string);
	void setPartDescription(string);
	void setQuantity(int);
	void setPricePerItem(double);

	//deconstrutor
	~inventoryType();

private:
	string partNumber;
	string partDescription;
	int quantity;
	double pricePerItem;
};

