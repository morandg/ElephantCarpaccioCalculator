#include <iostream>

#include "Calculator.h"

void usage(const char* appName)
{
    std::cout << appName << " <operation>\n";
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        usage(argv[0]);
        return -1;
    }

    std::string input = argv[1];
    auto result = elephant_calculator::Calculator::calculate(input);
    std::cout << input << " = " << result.asString() << "\n";

    return 0;
}
