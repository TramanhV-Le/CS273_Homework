#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle myCircle1;
	Circle myCircle2(10);
	Circle* myCircle3 = new Circle(12);
	Circle arrayOfCircles[10];

	for (int i = 0; i < 10; i++)
	{
		arrayOfCircles[i].setRadius(15);
	}
	return 0;
}