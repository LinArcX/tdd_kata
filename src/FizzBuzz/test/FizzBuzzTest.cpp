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
	EXPECT_TRUE("Fizz" == fizzBuzz.run(3));
}

TEST(FizzBuzzTests, PrintBuzzForFive)
{
	FizzBuzz fizzBuzz;
	EXPECT_TRUE("Buzz" == fizzBuzz.run(5));
}

TEST(FizzBuzzTests, PrintFizzBuzzForFifteen)
{
	FizzBuzz fizzBuzz;
	EXPECT_TRUE("FizzBuzz" == fizzBuzz.run(15));
}

TEST(FizzBuzzTests, PrintElevenForEleven)
{
	FizzBuzz fizzBuzz;
	EXPECT_TRUE("11" == fizzBuzz.run(11));
}
