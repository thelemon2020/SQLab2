#include "Triangle.h"

int Triangle::AngleCalc(int angleA, int angleB)
{
	int angleSum = 180;
	angleSum = -(angleA + angleB);
	return angleSum;
}

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC)
{
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
	this->angleA = angleA;
	this->angleB = angleB;
	this->angleC = angleC;
}