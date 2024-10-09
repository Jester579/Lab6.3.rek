#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	void Sort(int* a, const int size, int i) {
		int max = a[i];
		int imax = i;

		for (int j = i + 1; j < size; j++) {
			if (max < a[j]) {
				max = a[j];
				imax = j;
			}
		}

		a[imax] = a[i];
		a[i] = max;

		if (i < size - 2)
			Sort(a, size, i + 1);
	};

	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 5;
			int mas[SIZE] = { 4, 1, 3, 9, 7 };
			int SORT[SIZE] = { 9, 7, 4, 3, 1 };

			
			Sort(mas, SIZE, 0);

			
			for (int i = 0; i < SIZE; i++) {
				Assert::AreEqual(SORT[i], mas[i]);
			}
		};
	};
};