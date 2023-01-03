#include "calc_stat.hpp"
#include <stdexcept>

CalcStat::CalcStat() : m_minimum_value(0), m_maximum_value(0)
{}

CalcStat::~CalcStat()
{}

void CalcStat::setMinimumValue(int minimum_value)
{
	m_minimum_value = minimum_value;
}

void CalcStat::setMaximumValue(int maximum_value)
{
	m_maximum_value = maximum_value;
}

int CalcStat::minimumValue(std::vector<int> my_list)
{
	if (my_list.empty())
		throw std::invalid_argument("minimumValue() only accept non empty array of vectors!");

	for (auto i = 0; i < my_list.size(); i++)
	{
		if (0 == i)
			setMinimumValue(my_list[i]);
		else
		{
			if (my_list[i] < m_minimum_value)
				setMinimumValue(my_list[i]);
		}
	}
	return m_minimum_value;
}

int CalcStat::maximumValue(std::vector<int> my_list)
{
	if (my_list.empty())
		throw std::invalid_argument("maximumValue() only accept non empty array of vectors!");

	for (auto i = 0; i < my_list.size(); i++)
	{
		if (0 == i)
			setMaximumValue(my_list[i]);
		else
		{
			if (my_list[i] > m_maximum_value)
				setMaximumValue(my_list[i]);
		}
	}
	return m_maximum_value;
}
