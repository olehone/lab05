#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = floor(h(2) * 1000000) / 1000000;
			Assert::AreEqual(t, 0.753208);
		}
		TEST_METHOD(TestMethod2)
		{
			double t2;
			t2 = floor(h(0.5) * 100000) / 100000;
			Assert::AreEqual(t2, 1.28492);
		}
	};
}
