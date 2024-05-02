#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../op_7.1/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testVector = { 1, 2, 3, 4, 5 };
			int expectedCount = 3;

			int actualCount = count_if(testVector.begin(), testVector.end(), IsOdd);

			Assert::AreEqual(expectedCount, actualCount);

		}
	};
}
