#include "examples.h"

void runExamples() {
    stringExample();
    longIncrementExample();
    additionWithLoggerExample();
}

static void stringExample() {
    std::cout << "Running example: stringExample" << std::endl;
    auto funcyFunc = std::bind(addText, "Short", "Long axe handle string");
    std::chrono::microseconds funcyTime;
    std::string result = UptimeFunc::timeFunction<std::string>(funcyFunc, &funcyTime);
    std::cout << "Execution complete, time taken: "
        << funcyTime.count() << " microseconds" << std::endl;
    std::cout << "Returned: " << result << std::endl;
    std::cout << "stringExample completed" << std::endl << std::endl;
}

static void longIncrementExample() {
    std::cout << "Running example: longIncrementExample" << std::endl;
    auto funcyFunc = std::bind(longIncrement, 2054056032, 1);
    std::chrono::microseconds funcyTime;
    int result = UptimeFunc::timeFunction<int>(funcyFunc, &funcyTime);
    std::cout << "Execution complete, time taken: "
        << funcyTime.count() << " microseconds" << std::endl;
    std::cout << "Returned: " << result << std::endl;
    std::cout << "longIncrementExample: Completed" << std::endl << std::endl;
}

static void additionWithLoggerExample() {
    std::cout << "Running example: additionWithLoggerExample" << std::endl;
    auto funcyFunc = std::bind(sum, 456, 345);
    std::chrono::microseconds funcyTime;
    int result = UptimeFunc::timeFunction<int>(funcyFunc, &funcyTime, &std::cout);
    std::cout << "Execution complete, time taken: "
        << funcyTime.count() << " microseconds" << std::endl;
    std::cout << "Returned: " << result << std::endl;
    std::cout << "additionWithLoggerExample: Completed" << std::endl << std::endl;
}