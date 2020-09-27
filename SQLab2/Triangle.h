#pragma once
class Triangle
{
private:
	
public:
	Triangle(double a, double b, double aA, double aB);
	double PythagFormula();
	int findRemainingAngle();
	double FindArea();
	double sideA;
	double sideB;
	double angleA;
	double angleB;
};
