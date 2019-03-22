#include "pch.h"
#include "CFraction.h"
#include <string>
CFraction::CFraction()
{
}

void CFraction::convertDec2Frac(const double dDecimal, int& iNumerator, int& iDenominator) {
	string sString1 = to_string(dDecimal);
	int decimalSize;
	size_t pos = sString1.find(".") + 1;
	size_t pos2 = sString1.find("0") - 2;
	string str2 = sString1.substr(pos, pos2);

	decimalSize = str2.size();
	if (decimalSize == 1) {
		iNumerator = dDecimal * 10;
		iDenominator = 10;
	}
	else if (decimalSize == 2) {
		iNumerator = dDecimal * 100;
		iDenominator = 100;
	}

}

CFraction::CFraction(int iNumerator, int iDenominator) {
	numerator = iNumerator;
	denominator = iDenominator;
}

CFraction CFraction::operator+(const CFraction& fraction) {
	CFraction tempFraction;


	tempFraction.numerator = (numerator * fraction.denominator) + (fraction.numerator * denominator);
	tempFraction.denominator = (denominator * fraction.denominator);

	return tempFraction;
}

CFraction CFraction::operator-(const CFraction& fraction) {
	CFraction tempFraction;


	tempFraction.numerator = (numerator * fraction.denominator) - (fraction.numerator * denominator);
	tempFraction.denominator = (denominator * fraction.denominator);

	return tempFraction;
}

CFraction CFraction::operator*(const CFraction& fraction) {
	CFraction tempFraction;

	tempFraction.numerator = numerator * fraction.numerator;
	tempFraction.denominator = denominator * fraction.denominator;

	return tempFraction;
}

CFraction CFraction::operator/(const CFraction& fraction) {
	CFraction tempFraction;

	tempFraction.numerator = numerator * fraction.denominator;
	tempFraction.denominator = denominator * fraction.numerator;

	return tempFraction;
}

CFraction CFraction::operator+(const double decimalValue) {
	CFraction tempFraction; // instantiate object that will hold decimal value converted into a fraction.
	CFraction returnFraction;
	convertDec2Frac(decimalValue, tempFraction.numerator, tempFraction.denominator);
	
	returnFraction.numerator = (numerator * tempFraction.denominator) + (tempFraction.numerator * denominator);
	returnFraction.denominator = (denominator * tempFraction.denominator);

	
	return returnFraction;
}

CFraction CFraction::operator-(const double decimalValue) {
	CFraction tempFraction; // instantiate object that will hold decimal value converted into a fraction.
	CFraction returnFraction;
	convertDec2Frac(decimalValue, tempFraction.numerator, tempFraction.denominator);

	returnFraction.numerator = (numerator * tempFraction.denominator) - (tempFraction.numerator * denominator);
	returnFraction.denominator = (denominator * tempFraction.denominator);


	return returnFraction;
}

CFraction CFraction::operator*(const double decimalValue) {
	CFraction tempFraction; // instantiate object that will hold decimal value converted into a fraction.
	CFraction returnFraction;

	convertDec2Frac(decimalValue, tempFraction.numerator, tempFraction.denominator);

	returnFraction.numerator = numerator * tempFraction.numerator;
	returnFraction.denominator = denominator * tempFraction.denominator;

	return returnFraction;
}

CFraction CFraction::operator/(const double decimalValue) {
	CFraction tempFraction; // instantiate object that will hold decimal value converted into a fraction.
	CFraction returnFraction;
	convertDec2Frac(decimalValue, tempFraction.numerator, tempFraction.denominator);

	returnFraction.numerator = numerator * tempFraction.denominator;
	returnFraction.denominator = denominator * tempFraction.numerator;

	return returnFraction;
}

CFraction::~CFraction()
{
}
