#include "gtest/gtest.h"
#include "../ApplicationWithUnitTests/Calculator.h"

TEST(CalculatorTests, Sum)
{
	Calculator calc;

	EXPECT_EQ(5, calc.sum(2, 3));
}