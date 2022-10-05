#include <gtest/gtest.h>

#include "Calculator.h"

using namespace elephant_calculator;

TEST(Calculator, CalculateEmptyStringReturnsEmptyResult)
{
    EXPECT_EQ("", Calculator::calculate("").asString());
}
