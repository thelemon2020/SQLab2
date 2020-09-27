#include "pch.h"
#include "CppUnitTest.h"
#include "../SQLab2/Triangle.h"
#include "../SQLab2/Triangle.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:

		TEST_METHOD(Unit_Test_findRemainingAngle)
		{
			Triangle Triangle(10, 10, 10, 10);
			int result = Triangle.findRemainingAngle();
			Assert::AreEqual(160, result);
			//This test passed
		}

		TEST_METHOD(Exception_Test_findRemainingAngle)
		{
			Triangle Triangle(10, 10, 95, 95);
			int result = Triangle.findRemainingAngle();
			Assert::AreEqual(0, result);
			//this test passed
		}

		TEST_METHOD(Unit_Test_PythagFormula)
		{
			Triangle Triangle(5, 5, 5, 5);
			double result = Triangle.PythagFormula();
			double expectedValue = 0;
			Assert::AreEqual(expectedValue, result);
			//this passed
		}

		TEST_METHOD(Exception_Test_PythagFormula)
		{
			Triangle Triangle(5, 5, 95, 95);
			double result = Triangle.PythagFormula();
			double expectedValue = 0;
			Assert::AreEqual(expectedValue, result);
			//this passed
		}

	};
}