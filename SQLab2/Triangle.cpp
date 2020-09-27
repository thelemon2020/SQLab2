#include "Triangle.h"
#include <math.h>
Triangle::Triangle(double a, double b, double aA, double aB)
{
	sideA = a;
	sideB = b;
	angleA = aA;
	angleB = aB;
}

double Triangle::PythagFormula()
{
	double result = ((this->sideA * this->sideA) + (this->sideB* this->sideB));
	if (((angleA != 90) && (angleB != 90)) || (angleA + angleB > 180))
	{
		return 0;
	}
	return 0;
}

double Triangle::FindArea()
{
	if ((angleA == 90) || (angleB == 90) || (angleA + angleB == 90))
	{
		return (0.5 * sideA * sideB);
	}
	else
	{
		return 0;
	}
	
}

int Triangle::findRemainingAngle()
{
	
	if (this->angleA + this->angleB >= 180)
	{
		return 0;//Validation of a and b. Simply return 0 if
	}
	

	


	return (180 - this->angleA - this->angleB);
}