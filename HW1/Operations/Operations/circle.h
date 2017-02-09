#ifndef CIRCLE_H
#define CIRCLE_H

#include <stdio.h>
#include <iostream>
using namespace std;

class Circle {

private:
	double radius;

public:
	Circle();
	Circle(double r);
	double getArea();
	double getRadius();
	void setRadius(double r);

	Circle::Circle()
	{ double radius = 0; }

	Circle::Circle(double r)
	{ radius = r; }

	double Circle::getArea()
	{
		const double PI = 3.14159256;
		double area;
		area = pi * radius *radius;
		return area;
	}

	double Circle::getRadius(double r)
	{
		if (r > 0)
		{ radius = r; }
		else
		{ cout << " this is not a valid radius. please enter a positive number." << endl; }
	}
};
#endif