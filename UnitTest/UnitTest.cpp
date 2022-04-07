#include "pch.h"
#include "CppUnitTest.h"
#include "Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1(3, 5), r2(10, 10);
			Assert::IsTrue(r1 / r2 == Rational(3, 5));
		}
	};
}
