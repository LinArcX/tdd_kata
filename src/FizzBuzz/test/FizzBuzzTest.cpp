// https://kata-log.rocks/string-calculator-kata
/* TestCases:
	1. [+] Can create an instance of FizzBuzz class.
	2. [+] print "Fizz" for 3.
	3. [+] print "Buzz" for 5.
	4. [+] print "FizzBuzz" for 15.
	5. [+] print 11 for 11.
*/

#include <gtest/gtest.h>
#include "../FizzBuzz.hpp"
TEST(FizzBuzzTests, CanCreateInstanceOfFizzBuzzClass)
{
	FizzBuzz fizzBuzz;
}

TEST(FizzBuzzTests, PrintFizzForThree)
{
	FizzBuzz fizzBuzz;
	ASSERT_EQ("Fizz", fizzBuzz.run(3));
}

TEST(FizzBuzzTests, PrintBuzzForFive)
{
	FizzBuzz fizzBuzz;
	ASSERT_EQ("Buzz", fizzBuzz.run(5));
}

TEST(FizzBuzzTests, PrintFizzBuzzForFifteen)
{
	FizzBuzz fizzBuzz;
	ASSERT_EQ("FizzBuzz", fizzBuzz.run(15));
}
TEST(FizzBuzzTests, PrintElevenForEleven)
{
	FizzBuzz fizzBuzz;
	ASSERT_EQ("11", fizzBuzz.run(11));
}
