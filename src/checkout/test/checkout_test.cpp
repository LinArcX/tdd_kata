/* TestCases:
	1. [+] Can create an instance of Checkout class.
	2. [] Can add an item price.
	3. [] Can add an item.
	4. [] Can Calculate the current total.
	5. [] Can add multiple items and get correct total.
	6. [] Can add discount rules.
	7. [] Can apply discount rules to the total.
	8. [] Exception is thrown for item added without price for the item.
*/

#include <gtest/gtest.h>
#include "../checkout.hpp"

TEST(CheckoutTests, CanCreateInstanceOfCheckoutClass)
{
	Checkout* checkout = new Checkout();
}
