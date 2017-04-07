#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
#include <string>
using namespace std;

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	
	/** variables to store customer data*/
	string name;
	string address;
	short int age;
	string telephone_number;
	int customer_number;
	
	double SAVINGS_INTEREST; 
	double CHECK_INTEREST;  
	double CHECK_CHARGE; 
	double OVERDRAFT_PENALTY;  
	
public:
	/** Constructor with set values */
	Customer(string n, string a, short int ag, string tn, int cn)
	{
		name = n;
		address = a;
		age = ag;
		telephone_number = tn;
		customer_number = cn;
	}
	
	/** GETters and SETters */
	const string get_name() { return name; }

	const string get_address() { return address; }

	const short int get_age() { return age; }

	const string get_telephone_number() { return telephone_number; }

	const int get_customer_number() { return customer_number; }

	const double get_SAVINGS_INTEREST() { return SAVINGS_INTEREST; }

	const double get_CHECK_INTEREST() { return CHECK_INTEREST; }

	const double get_CHECK_CHARGE() { return CHECK_CHARGE; }

	const double get_OVERDRAFT_PENALTY() { return OVERDRAFT_PENALTY; }

protected:
	//protected setters for customer data
	void set_name(string n) { name = n; }

	void set_address(string a) { address = a; }

	void set_age(short int a) { age = a; }

	void set_telephone_number(string n) { telephone_number = n; }

	void set_customer_number(int n) { customer_number = n; }
};

class Senior : public Customer { /** Defines the 'class Senior' */
public:
	Senior(string name, string address, int age, string telephone, int customer_number) : Customer(name, address, age, telephone, customer_number)
	{
		/** According to a Senior's account (% , % , % , $) */
		SAVINGS_INTEREST = 7.65; 
		CHECK_INTEREST = 1.86;  
		CHECK_CHARGE = 0.35; 
		OVERDRAFT_PENALTY = 28.50;  
	}
};

class Adult : public Customer { /** Defines the 'class Adult' */
public:
	Adult(string name, string address, int age, string telephone, int customer_number) : Customer(name, address, age, telephone, customer_number)
	{
		/** According to a Senior's account (% , % , % , $) */
		SAVINGS_INTEREST = 6.65; 
		CHECK_INTEREST = 1.3;  
		CHECK_CHARGE = 1.35; 
		OVERDRAFT_PENALTY = 34.50;  
	}
};

class Student : public Customer { /** Defines the 'class Student' */
public:
	Student(string name, string address, int age, string telephone, int customer_number) : Customer(name, address, age, telephone, customer_number)
	{
		/** According to a Student's account (% , % , % , $) */
		SAVINGS_INTEREST = 8.65;
		CHECK_INTEREST = 0.86;
		CHECK_CHARGE = 0.35;
		OVERDRAFT_PENALTY = 20.55;
	}
};
#endif