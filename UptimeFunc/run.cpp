#include <iostream>
#include "tests/tests.h"
#include "examples/examples.h"

int main() {
    //runExamples();
    runTests();

    std::cout << std::endl << std::endl << "All done, enter to exit" << std::endl;;
    int i;
    std::cin >> i;

    return 0;
}