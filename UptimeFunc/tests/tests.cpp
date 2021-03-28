#include "tests.h"

void runTests() {
    std::cout << "Running tests: " << std::endl;
    matchReturnValues_Sum();
    matchReturnValues_StringAddition();
    std::cout << "All tests passed, well done" << std::endl;
}

void matchReturnValues_Sum() {
    std::cout << "Running Test: matchReturnValues_Sum.";
    int arg1 = 5;
    int arg2 = 67;

    auto funcyFunc = std::bind(sum, arg1, arg2);
    std::chrono::microseconds funcyTime;
    std::cout << ".";

    int expectedResult = sum(arg1, arg2);
    int actualResult = UptimeFunc::timeFunction<int>(funcyFunc, &funcyTime);
    std::cout << ".";

    assert(expectedResult == actualResult);
    std::cout << "Done" << std::endl;
}

void matchReturnValues_StringAddition() {
    std::cout << "Running Test: matchReturnValues_StringAddition.";
    std::string arg1 = "Squire of the year is overrated! ";
    std::string arg2 = "Oh yeh? And who the hell are you?";

    auto funcyFunc = std::bind(addText, arg1, arg2);
    std::chrono::microseconds funcyTime;
    std::cout << ".";

    std::string expectedResult = addText(arg1, arg2);
    std::string actualResult = UptimeFunc::timeFunction<std::string>(funcyFunc, &funcyTime);
    std::cout << ".";

    assert(expectedResult == actualResult);
    std::cout << "Done" << std::endl;
}