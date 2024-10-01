#include "Date.hpp"

Date::Date(int day, int month, int year) 
{
	if (day <= 0 or month <= 0) //отрицательный год считаю как год до н.э.
	{
		std::cout << "ќтрицательное значение даты! ”становнлена дата по умолчанию - 1 окт€бр€ 2024 года" << std::endl; //ƒата по умолчанию - дата написани€ данной работы (почему бы и нет)
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if (month > 12)
	{
		std::cout << "Ќомер мес€ца не может быть больше 12! ”становнлена дата по умолчанию - 1 окт€бр€ 2024 года" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if (month == (int)Month::FEBRUARY and day > 29)
	{
		std::cout << "¬ феврале максимум 29 дней! ”становнлена дата по умолчанию - 1 окт€бр€ 2024 года" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if ((month % 2) == 0 and day > 30)
	{
		std::cout << "¬ четном мес€це не может быть больше 30 дней! ”становнлена дата по умолчанию - 1 окт€бр€ 2024 года" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if ((month % 2) == 1 and day > 31)
	{
		std::cout << "¬ нечетном мес€це не может быть больше 31 дн€! ”становнлена дата по умолчанию - 1 окт€бр€ 2024 года" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	m_year = year;
	m_month = month;
	m_day = day;
}

Date::Date(Date& date)
{
	m_day = date.m_day;
	m_month = date.m_month;
	m_year = date.m_year;
}

Date::~Date()
{

}

Comparison compare(Date date1, Date date2)
{
	if (date1.m_year < date2.m_year)
		return Comparison::OLDER;
	else
	{
		if (date1.m_month < date2.m_month)
			return Comparison::OLDER;

		else
		{
			if (date1.m_day < date2.m_day)
				return Comparison::OLDER;

			else if (date1.m_day == date2.m_day)
				return Comparison::EQUAL;

			else if (date1.m_day > date2.m_day)
				return Comparison::NEWER;
		}
			

	}

}

void Date::print_date()
{
	std::string month;

	switch (m_month)
	{
	case((int)Month::JANUARY):
		month = "€нвар€";
		break;

	case((int)Month::FEBRUARY):
		month = "феврал€";
		break;

	case((int)Month::MARCH):
		month = "марта";
		break;

	case((int)Month::APRIL):
		month = "апрел€";
		break;

	case((int)Month::MAY):
		month = "ма€";
		break;

	case((int)Month::JUNE):
		month = "июн€";
		break;

	case((int)Month::JULY):
		month = "июл€";
		break;

	case((int)Month::AUGUST):
		month = "августа";
		break;

	case((int)Month::SEPTEMBER):
		month = "сент€бр€";
		break;

	case((int)Month::OCTOBER):
		month = "окт€бр€";
		break;

	case((int)Month::NOVEMBER):
		month = "но€бр€";
		break;

	case((int)Month::DECEMBER):
		month = "декабр€";
		break;

	default:
		month = "хз какого мес€ца";
		break;
	}

	std::cout << "ƒата: " << m_day << " " << month << " " << ((m_year < 0)?(-m_year):(m_year)) << ((m_year < 0) ?(" года до н.э.") : (" года")) << std::endl;
}