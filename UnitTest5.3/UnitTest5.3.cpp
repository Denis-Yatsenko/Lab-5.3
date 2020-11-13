#include "pch.h"
#include "CppUnitTest.h"
#include "../Lan_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(1);
			Assert::AreEqual(t, 0);
		}
		TEST_METHOD(TestMethod2)
		{
			int q;
			q = f(0);
			Assert::AreEqual(q, 1);
		}
	};
}
