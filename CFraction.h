#pragma once
#include <iostream>
using namespace std;

class CFraction
{
	friend ostream& operator<<(ostream& osObject, const CFraction& fraction) {
		osObject << fraction.numerator << "/" << fraction.denominator << endl;

		return osObject;
	}
private:
	int numerator;
	int denominator;
	void convertDec2Frac(const double, int&, int&);
public:
	CFraction();

	CFraction(int, int);

	CFraction operator+(const CFraction&);
	CFraction operator-(const CFraction&);
	CFraction operator*(const CFraction&);
	CFraction operator/(const CFraction&);

	CFraction operator+(const double);
	CFraction operator-(const double);
	CFraction operator*(const double);
	CFraction operator/(const double);	

	~CFraction();
};

