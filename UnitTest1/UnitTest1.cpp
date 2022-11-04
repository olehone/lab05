#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = floor (A(1.5, 2, 2) * 10000000) / 10000000;
			Assert::AreEqual(t, 2.25);
		}
	};
}
