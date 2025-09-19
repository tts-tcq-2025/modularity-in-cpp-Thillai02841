#include <iostream>
#include "ColorPair.h"
#include "ColorUtils.h"
#include "ManualPrinter.h"

using namespace TelCoColorCoder;

// Test a single color pair and print the result
void testColorPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = getColorFromPairNumber(pairNumber);
    std::string result = colorPair.toString();

    std::cout << "Pair Number: " << pairNumber
              << " => " << result << std::endl;

    if (colorPair.getMajorColor() != expectedMajor ||
        colorPair.getMinorColor() != expectedMinor) {
        std::cerr << "Test failed for pair number: " << pairNumber << std::endl;
    }
}

// Run all color pair tests
void runTests() {
    testColorPair(4, MajorColor::WHITE, MinorColor::BROWN);
    testColorPair(5, MajorColor::WHITE, MinorColor::SLATE);
    testColorPair(23, MajorColor::VIOLET, MinorColor::GREEN);
}

// Entry point
int main() {
    runTests();
    ManualPrinter::printManual();
    return 0;
}
```
