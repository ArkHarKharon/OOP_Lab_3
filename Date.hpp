#pragma once
#include "includes.hpp"

enum class Month
{
	JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

enum class Comparison
{
	EQUAL = 1, OLDER, NEWER
};


class Date
{
protected:
	int m_day;
	int m_month;
	int m_year;

public:
	Date(int day, int month, int year);
	Date(Date& date);
	Date() {};
	~Date();

	friend Comparison compare(Date date1, Date date2); //вернёт true, если date1 была раньше, чем date2

	virtual void print_date();
};

