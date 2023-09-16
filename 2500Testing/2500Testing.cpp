#include "pch.h"
#include "CppUnitTest.h"
#include "header.h"
#include "Main.cpp"

namespace MVC = Microsoft::VisualStudio::CppUnitTestFramework;

namespace My2500Testing
{
    TEST_CLASS(StringIntConstructor) {
    public:
        // Robot(std::string name, int n) constructor
        TEST_METHOD(TestMethod1) {
            //Have multiple tests for function
        }
    };

    TEST_CLASS(StringIntIntConstructor) {
    public:
        // Robot(std::string name, int n, int m) function
        TEST_METHOD(TestMethod1) {
            // Have multiple tests for function
        }
    };

    TEST_CLASS(getNameFunction) {
    public:
        // std::string getName() function
        TEST_METHOD(TestMethod1) {
            // Have multiple tests for function
        }
    };

    TEST_CLASS(getNumWheelsFunction) {
    public:
        // int getNumWheels() function
        TEST_METHOD(TestMethod1) {
            // Have multiple tests for function
        }
    };

    TEST_CLASS(getNumSensorsFunction) {
    public:
        // int getNumSensors() function
        TEST_METHOD(TestMethod1) {
            // Have multiple tests for function
        }
    };

    TEST_CLASS(setNameFunction) {
    public:
        // void setName(std::string name) function
        TEST_METHOD(TestMethod1) {
            // Have multiple tests for function
        }
    };
}

