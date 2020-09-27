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
			Triangle testTriangle(10, 10);
			int third_angle_result = testTriangle.findRemainingAngle(30, 30);
			Assert::AreEqual(120, third_angle_result);
			//This test passed
		}

		TEST_METHOD(Exception_Test_findRemainingAngle)
		{
			Triangle testTriangle2(10, 10);
			int third_angle_result2 = testTriangle2.findRemainingAngle(100, 100);
			Assert::AreEqual(0, third_angle_result2);
			//this test failed
		}
	};
}