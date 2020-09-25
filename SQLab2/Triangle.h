#pragma once
class Triangle
{
private:

	int sideA;
	int sideB;
	int sideC;
	int angleA;
	int angleB;
	int angleC;

public:

	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
	int AngleCalc(int angleA, int angleB);
};

