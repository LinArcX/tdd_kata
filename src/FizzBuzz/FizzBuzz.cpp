#include "fizzbuzz.hpp"

FizzBuzz::FizzBuzz()
{
}

FizzBuzz::~FizzBuzz()
{
}

std::string FizzBuzz::run(int input)
{
	if (input % 3 == 0)
	{
		if (input % 5 == 0)
		{
			return "FizzBuzz";
		}
		else {
			return "Fizz";
		}
	}
	else if (input % 5 == 0)
	{
		if (input % 3 == 0)
		{
			return "FizzBuzz";
		}
		else {
			return "Buzz";
		}
	}
	else {
		return std::to_string(input);
	}
}
