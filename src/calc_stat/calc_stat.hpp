#ifndef TDD_KATA_CALCSTAT_HPP
#define TDD_KATA_CALCSTAT_HPP

#include <vector>

class CalcStat {
public:
	CalcStat();
	~CalcStat();
	int minimumValue(std::vector<int> my_list);
	int maximumValue(std::vector<int> my_list);

private:
	int m_minimum_value;
	int m_maximum_value;
	void setMinimumValue(int minimum_value);
	void setMaximumValue(int maximum_value);
};

#endif // TDD_KATA_CALCSTAT_HPP
