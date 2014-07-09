#include "LeapYear.h"

namespace
{

bool IsDivisableBy400(int Year)
{
	return (Year%400) == 0;
}

bool IsDivisableBy100(int Year)
{
	return (Year%100) == 0;
}

bool IsDivisableBy4(int Year)
{
	return (Year%4) == 0;
}

}

bool IsLeapYear(int Year)
{
	const bool LeapYear = IsDivisableBy400(Year) ||
		(IsDivisableBy4(Year) && !IsDivisableBy100(Year));
	return LeapYear;
}
