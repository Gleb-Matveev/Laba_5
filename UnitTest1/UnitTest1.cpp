#include "pch.h"
#include "CppUnitTest.h"
#include "../Calc_for_isrpo/Test.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1_Mul)
		{
			Assert::AreEqual(12, Calc(4, "*", 3));
			Assert::AreEqual(0, Calc(4, "*", 0));
			Assert::AreEqual(3, Calc(1, "*", 3));
		}
		TEST_METHOD(TestMethod2_Add)
		{
			Assert::AreEqual(5, Calc(2, "+", 3));
			Assert::AreEqual(17, Calc(4, "+", 13));
			Assert::AreEqual(4, Calc(1, "+", 3));
		}
		TEST_METHOD(TestMethod2_Min)
		{
			Assert::AreEqual(-1, Calc(2, "-", 3));
			Assert::AreEqual(-9, Calc(4, "-", 13));
			Assert::AreEqual(0, Calc(3, "-", 3));
		}
		TEST_METHOD(TestMethod2_Div)
		{
			Assert::AreEqual(0, Calc(4, "/", 0));
			Assert::AreEqual(2, Calc(4, "/", 2));
			Assert::AreEqual(3, Calc(9, "/", 3));
		}
	};
}