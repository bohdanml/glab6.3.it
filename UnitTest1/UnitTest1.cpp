#include "pch.h"
#include "CppUnitTest.h"
#include"..\\lab6.3.it\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 7;
			int arr[size] = { 1, 2, 3, 4, 5, 6, 7 };

			reverseArray(arr, 0, size - 1);

			int expected[size] = { 7,6,5, 4, 3, 2, 1 };

			for (int i = 0; i < size; ++i) {
				Assert::AreEqual(expected[i], arr[i]);
			}
			} 
	};
}
