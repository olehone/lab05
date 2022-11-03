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
			t = floor(k(1, 2)*10000000)/10000000;
			Assert::AreEqual(t, 0.0295785);
		}
	};
}
