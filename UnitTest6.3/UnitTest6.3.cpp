#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int a = 4;
			int c[a] = {3, 3, 3, 3 };
			t = arrCount(c, a, 0, 0);
			Assert::AreEqual(t, 4);
		}
	};
}
