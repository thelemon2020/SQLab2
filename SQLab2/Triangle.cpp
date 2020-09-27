#include "Triangle.h"
Triangle::Triangle(int a, int b)
{
	sideA = a;
	sideB = b;
}

double Triangle::PythagFormula(int a, int b)
{
	return 0;
}

double Triangle::FindArea(int a, int b)
{
	return 0;
}

int Triangle::findRemainingAngle(int a, int b)
{
	/*
	if (a + b >= 180)
	{
		return 0;//Validation of a and b. Simply return 0 if
	}
	*/

	//Comment out this section to purposely fail a test


	return (180 - a - b);
}