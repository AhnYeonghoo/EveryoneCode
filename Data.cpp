#include "Date.hpp"

void Date::SetDate(int year, int month, int day)
{
	year_ = year;
	month_ = month;
	day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month)
{
	static int monthDay[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month != 2)
	{
		return monthDay[month - 1];
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}

void Date::AddDay(int inc)
{
	while (true)
	{
		int currentMonthTotalDays = GetCurrentMonthTotalDays(year_, month_);

		// 같은 달 안에 들어온다면;
		if (day_ + inc <= currentMonthTotalDays)
		{
			day_ += inc;
			return;
		}
		else
		{
			inc -= (currentMonthTotalDays - day_ + 1);
			day_ = 1;
			AddMonth(1);
		}
	}
}

void Date::AddMonth(int inc)
{
	AddYear((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }
void Date::ShowDate()
{
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 "
		<< day_ << " 일 입니다." << std::endl;
} 
