#pragma once
#include "Date.hpp"

class NewDate : public Date
{
public:
	NewDate(int day, int month, int year) : Date(day, month, year){};
	virtual void print_date();
};