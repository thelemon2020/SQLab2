#include "Triangle.h"
Triangle::Triangle(int a, int b, int aA, int aB)
{
	sideA = a;
	sideB = b;
	angleA = aA;
	angleB = aB;
}

double Triangle::PythagFormula()
{
	return 0;
}

double Triangle::FindArea()
{
	return 0;
}

int Triangle::findRemainingAngle()
{
	
	if (this->angleA + this->angleB >= 180)
	{
		return 0;//Validation of a and b. Simply return 0 if
	}
	

	


	return (180 - this->angleA - this->angleB);
}