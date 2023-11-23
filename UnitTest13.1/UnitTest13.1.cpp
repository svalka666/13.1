#include "pch.h"
#include "CppUnitTest.h"
#include "../13,2/dod.h"
#include "../13,2/sum.h"
#include "../13,2/var.h"
#include "../13,2/sum.cpp"
#include "../13,2/dod.cpp"
#include "../13,2/var.cpp"
#include "../13,2/Lab_13_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0.1;
			n = 1;
			a = 1.0;

			dod();

			Assert::AreEqual(a, 0, 0.1);

		}
	};
}
