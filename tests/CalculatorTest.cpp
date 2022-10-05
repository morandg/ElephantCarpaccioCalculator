#include <gtest/gtest.h>

#include "Calculator.h"

using namespace elephant_calculator;

TEST(Calculator, CalculateEmptyStringReturnsEmptyString)
{
    EXPECT_EQ("", Calculator::calculate(""));
}