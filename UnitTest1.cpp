#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/6.7/6.7/Source.cpp"
#include "C://Users/User/source/repos/6.7/6.7/Array.cpp"
#include "C://Users/User/source/repos/6.7/6.7/Array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array b;
			int t = b.size();
			Assert::AreEqual(t, 10);
		}
	};
}
