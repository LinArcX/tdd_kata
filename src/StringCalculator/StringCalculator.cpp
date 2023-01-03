#include "StringCalculator.hpp"

StringCalculator::StringCalculator()
{
}

StringCalculator::~StringCalculator()
{
}

int StringCalculator::calculate(std::string input)
{
	size_t pos = 0;
	std::string token;
	int sum = 0;

	if (input.length()) {
		while (((pos = input.find(",")) != std::string::npos) || ((pos = input.find("\n")) != std::string::npos))
		{
		 sum += std::stoi(input.substr(0, pos));
		 input.erase(0, pos+1);
		}
		sum += std::stoi(input);
		return sum;
	}
	else
	{
		return 0;
	}
}
