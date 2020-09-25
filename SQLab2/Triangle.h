#pragma once
class Triangle
{
	private:
		int sideA;
		int sideB;
	public:
		Triangle(int a, int b);
		double PythagFormula(int a, int b);
		int findRemainingAngle(int a, int b);
		double FindArea(int a, int b);
};

