#include "helpers.h"

int sum(int a, int b) {
    return a + b;
}

int longIncrement(int a, int b) {
    for (int i = 0; i < a; i++) {
        b++;
    }
    return b;
}

std::string addText(std::string a, std::string b) {
    return a + b;
}