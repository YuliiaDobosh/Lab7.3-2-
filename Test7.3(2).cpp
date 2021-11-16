#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab7.3(2)\Lab7.3(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 2, -3 };
			a[1] = new int[2]{ 1, 0 };
			Find_k(a, 2, 2,0,0);
			Assert::AreEqual(2, k);


		}
	};
}
