/****************

* Name: VINA LE

* Project: HW03_1

* Date last updated: March 13, 2017

*****************/
#include "stdafx.h"
#include "readint.h"
#include <stdexcept>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	// Implement this

	cin.exceptions(ios_base::failbit);

	if (low >= high)
	{
		throw invalid_argument("Smallest and largest values are invalid.");
	}

	int num = 0;
	while (true) // loop until valid input exists
	{

		try {
			cout << prompt;
			cin >> num;
			if (num < low || num > high)
			{
				throw range_error("e");
			}
			return num;
		}
		catch (range_error)
		{
			//have user enter value within range
			cout << "Invalid number.  Please enter a number within range: ";
			cin >> num;
		}
		catch (const char *e)
		{
			cout << "Exception Occured. " << e << endl;
			cin.clear();
			//skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
		catch (ios_base::failure &ex)
		{
			cout << "Bad numeric string -- try again \n";
			//reset the error flag
			cin.clear();
			//skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
}