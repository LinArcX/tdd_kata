/* TestCases:
	1. [+] Can create an instance of CalcStat class.

	2. [+] Throw std::invalid_argument exception when call minimum_value with an empty vector.
	3. [+] Return minimum value when pass an vector with one element.
	4. [+] Return minimum value when pass an vector with two elements.
	5. [+] Return minimum value when pass an vector with three elements.
	6. [+] Return minimum value when pass an vector random elements(8). // randomness

	7. [+] Throw std::invalid_argument exception when call maximum_value with an empty vector.
	8. [+] Return maximum value when pass an vector with one element.
	9. [+] Return maximum value when pass an vector with two element.
	10. [+] Return maximum value when pass an vector with three element.
	11. [+] Return maximum value when pass an vector with 13 element. // randomness

	12. [] Throw std::invalid_argument exception when call average_value with an empty vector.
	13. [] Return average value when pass an vector with one element.
	14. [] Return average value when pass an vector with two element.
	15. [] Return average value when pass an vector with three element.
	16. [] Return average value when pass an vector with 21 element. // randomness

	17. [] Throw std::invalid_argument exception when call number_of_elements with an empty vector.
	18. [] Return numberOfElements value when pass an vector with one element.
	19. [] Return numberOfElements value when pass an vector with two element.
	20. [] Return numberOfElements value when pass an vector with three element.
	21. [] Return numberOfElements value when pass an vector with 13 element. // randomness
*/

#include <vector>
#include <stdexcept>
#include <gtest/gtest.h>
#include "../calc_stat.hpp"

class CalcStatTests : public ::testing::Test
{
protected:
	CalcStat calcStat;
	std::vector<int> test_list;

	template <typename T>
	void append(T item)
	{
		test_list.push_back(item);
	}

	template<typename T, typename... Args>
	void append(T item, Args... args)
	{
		test_list.push_back(item);
		append(args...);
	}
};
TEST_F(CalcStatTests, ThrowStdInvalidArgumentWhenCallMinimumValueWithAnEmptyArray)
{
	ASSERT_THROW(calcStat.minimumValue(test_list), std::invalid_argument);
}
TEST_F(CalcStatTests, ReturnMinimumValueWhenPassAnArrayWithOneElement)
{
	append(1);
	ASSERT_EQ(calcStat.minimumValue(test_list), 1);
}
TEST_F(CalcStatTests, ReturnMinimumValueWhenPassAnArrayWithTwoElements)
{
	append(5, 4);
	ASSERT_EQ(calcStat.minimumValue(test_list), 4);
}
TEST_F(CalcStatTests, ReturnMinimumValueWhenPassAnArrayWithThreeElements)
{
	append(458, 13, 45);
	ASSERT_EQ(calcStat.minimumValue(test_list), 13);
}
TEST_F(CalcStatTests, ReturnMinimumValueWhenPassAnArrayWithEightElements)
{
	append(458, 45, 25, 8, 568, 11, 843, 72);
	ASSERT_EQ(calcStat.minimumValue(test_list), 8);
}
TEST_F(CalcStatTests, ThrowStdInvalidArgumentWhenCallMaximumValueWithAnEmptyArray)
{
	ASSERT_THROW(calcStat.maximumValue(test_list), std::invalid_argument);
}

TEST_F(CalcStatTests, ReturnMaximumValueWhenPassAnArrayWithOneElement)
{
	append(1);
	ASSERT_EQ(calcStat.maximumValue(test_list), 1);
}
TEST_F(CalcStatTests, ReturnMaximumValueWhenPassAnArrayWithTwoElements)
{
	append(5, 4);
	ASSERT_EQ(calcStat.maximumValue(test_list), 5);
}
TEST_F(CalcStatTests, ReturnMaximumValueWhenPassAnArrayWithThreeElements)
{
	append(458, 13, 45);
	ASSERT_EQ(calcStat.maximumValue(test_list), 458);
}
TEST_F(CalcStatTests, ReturnMaximumValueWhenPassAnArrayWithThirteenElements)
{
	append(458, 45, 25, 5, 2, 456, 78978, 125, 8, 568, 11, 843, 72);
	ASSERT_EQ(calcStat.maximumValue(test_list), 78978);
}

