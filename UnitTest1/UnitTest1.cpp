#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto tmp = h(0, 1, 0); 
			Assert::AreEqual(1.0, tmp); 
		}
	};
}
