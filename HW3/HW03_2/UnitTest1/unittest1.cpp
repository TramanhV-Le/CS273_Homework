#include "stdafx.h"
#include "CppUnitTest.h"
#include "ReadInt.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept> // remember to include in unittest1.cpp

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

TEST_CLASS(READINT_TEST) // Test suite for read_int()
{
	TEST_METHOD(TestCase1) // Test case 1: invalid inputs return 0
	{
		ifstream ss("..\\unittest1\\zeroinput.txt");

		//check to see if file can be opened
		if (ss.fail())
			throw int(-1);

		// Replace the cin read buffer with the read buffer from the file stream 
		streambuf *orig_cin = cin.rdbuf(ss.rdbuf());
		// Perform the read_int() test.
		Assert::AreEqual(read_int("My prompt: ", -3, 3), 0);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

		// Close the file stream
		ss.close();
	}

	TEST_METHOD(TestCase2) // Test case 2: for invalid argument
	{
		// define a C++11 Lambda function to be called by your test
		auto func = []() {
			// call with incorrect arguments (test case 2)
			read_int("My prompt: ", 5, 1);
		};
		// We expect an invalid_argument exception to be thrown when we call func!
		Assert::ExpectException<std::invalid_argument>(func);

	}
	TEST_METHOD(TestCase3) // Expect 3 will be returned by the function
	{
		// create a string stream object with the desired input
		istringstream ss("-3\n5\n10\n-2\n3");

		// Replace the cin read buffer with the read buffer from the string stream 
		streambuf
			
			*orig_cin = cin.rdbuf(ss.rdbuf());

		Assert::AreEqual(read_int("My prompt: ", 0, 4), 3);

		// Restore cin to the way it was before
		cin.rdbuf(orig_cin);

	}
	TEST_METHOD(TestCase4) // Test case 4: for invalid argument
	{
		auto func = []() {
			// call with incorrect arguments (test case 4)
			read_int("My prompt: ", 0, 0);
		};
		// We expect an invalid_argument exception to be thrown when we call func!
		Assert::ExpectException<std::invalid_argument>(func);

	}
};