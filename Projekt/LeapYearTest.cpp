#include "UnitTest++.h"
#include "LeapYear.h"

namespace
{
TEST(OurFirstTest)
    {
        const bool Result = IsLeapYear(1972);
        CHECK_EQUAL(true, Result);
    }
TEST(OurSecondTest)
    {
        const bool Result = IsLeapYear(1973);
        CHECK_EQUAL(false, Result);
    }

TEST(DivisableBy100)
{
	const bool Result = IsLeapYear(1900);
	CHECK_EQUAL(false, Result);
}
TEST(DivisableBy400)
{
	const bool Result = IsLeapYear(2000);
	CHECK_EQUAL(true, Result);
}
}
