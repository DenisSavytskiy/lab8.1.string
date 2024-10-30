#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№8.1.string/AP_Lab№8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
    TEST_CLASS(StringTests) {
public:
    TEST_METHOD(TestStringCount) {
        string str = "while doing while loop while";
        int result = Count(str);
        Assert::AreEqual(3, result);
    }

    TEST_METHOD(TestStringChange) {
        string str = "while doing while loop while";
        string result = Change(str);
        Assert::AreEqual(string("*** doing *** loop ***"), result);
    }
    };
}