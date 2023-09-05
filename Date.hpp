#pragma once
#include <iostream>

class Date
{
private:
	int year_;
	int month_;
	int day_;
	
public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);
	
	// 해당 월의 총 일 수를 구한다.
	int GetCurrentMonthTotalDays(int year, int month);
	void ShowDate();
};