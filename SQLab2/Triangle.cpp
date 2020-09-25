#include "Triangle.h"

int Triangle::AngleCalc(int angleA, int angleB)
{
	int angleSum = 180;
	angleSum = -(angleA + angleB);
	return angleSum;
}