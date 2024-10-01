#include "NewDate.hpp"


void NewDate::print_date()
{
	std::string month;
	std::string season;

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

	switch (m_month)
	{
	case((int)Month::JANUARY):
	case((int)Month::FEBRUARY):
	case((int)Month::DECEMBER):
		season = "зима";
		break;

	case((int)Month::MARCH):
	case((int)Month::APRIL):
	case((int)Month::MAY):
		season = "весна";
		break;

	case((int)Month::JUNE):
	case((int)Month::JULY):
	case((int)Month::AUGUST):
		season = "лето";
		break;

	case((int)Month::SEPTEMBER):
	case((int)Month::NOVEMBER):
		season = "осень";
		break;

	default:
		month = "хз кака€";
		break;
	}

	std::cout << "ƒата: " << m_day << " " << month << " " << ((m_year < 0) ? (-m_year) : (m_year)) << ((m_year < 0) ? (" года до н.э.") : (" года")) << std::endl;
	std::cout << "¬рем€ года: " << season << std::endl;
	
}