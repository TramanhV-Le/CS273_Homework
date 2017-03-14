/****************

* Name: VINA LE

* Project: HW03_1

* Date last updated: March 13, 2017

*****************/

#include <iostream>
#include <stdexcept>
#include "readint.h"
using namespace std;

int main()
{
	// Code provided in the HW guide
	int low, high;
	cout << "Enter the range of values to read.\n";
	cout << "high: ";
	cin >> high;
	cout << "low: ";
	cin >> low;
	try 
	{	// Gets input from the user for a ranged number
		int number = read_int(" Please enter number within range: ", low, high);
		cout << "You entered " << number << endl;
	}
	catch (invalid_argument &e) { // Throws invalid message
		cerr << "Exception: You supplied an invalid argument for read_int! \n";
	}
}