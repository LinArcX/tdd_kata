// https://kata-log.rocks/string-calculator-kata
/* TestCases:
	1. [+] return 0 for "".
	2. [+] reuturn 4 for "1,3".
	3. [+] reuturn 91 for "16,68,7".
	4. [+] handle \n".
*/

#include <gtest/gtest.h>
#include "../StringCalculator.hpp"

TEST(StringCalculatorTests, ReturnZeroForEmptyString)
{
  StringCalculator stringCalc;
  ASSERT_EQ(0, stringCalc.calculate(""));
}
TEST(StringCalculatorTests, ReturnFourForOneThree)
{
	StringCalculator stringCalc;
	ASSERT_EQ(4, stringCalc.calculate("1,3"));
}
TEST(StringCalculatorTests, ReturnEightyFourForSixteenAndSixtyEight)
{
	StringCalculator stringCalc;
	ASSERT_EQ(91, stringCalc.calculate("16, 68, 7"));
}
TEST(StringCalculatorTests, HandleNewLine)
{
	StringCalculator stringCalc;
	ASSERT_EQ(37, stringCalc.calculate("4\n8\n5\n20"));
}

