#pragma once
class Triangle
{
private:
	
public:
	Triangle(int a, int b, int aA, int aB);
	double PythagFormula();
	int findRemainingAngle();
	double FindArea();
	int sideA;
	int sideB;
	int angleA;
	int angleB;
};
