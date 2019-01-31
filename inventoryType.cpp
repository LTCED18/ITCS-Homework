#include "pch.h"
#include <iostream>
#include <string>
#include "inventoryType.h"

using namespace std;

inventoryType::inventoryType()
{
	partNumber = "_";
	partDescription = "+";
	quantity = 0;
	pricePerItem = 0.0;
}

inventoryType::inventoryType(string pNumber, string pDescrip, int quant, double ppi) {

	if (pNumber != "_") {
		partNumber = pNumber;
	}
	else partNumber = "_";

	if (pDescrip != "+") {
		partDescription = pDescrip;
	}
	else {
		partDescription = "+";
	}
	if (quant >= 0) {
		quantity = quant;
	}
	else {
		quantity = 0;
	}

	if (ppi >= 0) {
		pricePerItem = ppi;
	}
	else {
		ppi = 0;
	}
}

string inventoryType::getPartNumber() const {
	return partNumber;
}

string inventoryType::getPartDescription() const {
	return partDescription;
}

int inventoryType::getQuantity() const {
	return quantity;
}

double inventoryType::getPricePerItem() const {
	return pricePerItem;
}

double inventoryType::getInvoiceAmount() {
	return static_cast<double>(quantity) * pricePerItem;
}

void inventoryType::setPartNumber(string partNum) {
	partNumber = partNum;
}

void inventoryType::setPartDescription(string partDescrip) {
	partDescription = partDescrip;
}

void inventoryType::setQuantity(int quant) {
	quantity = quant;
}

void inventoryType::setPricePerItem(double ppi) {
	pricePerItem = ppi;
}

inventoryType::~inventoryType()
{
}
