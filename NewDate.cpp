#include "NewDate.hpp"


void NewDate::print_date()
{
	std::string month;
	std::string season;

	switch (m_month)
	{
	case((int)Month::JANUARY):
		month = "������";
		break;

	case((int)Month::FEBRUARY):
		month = "�������";
		break;

	case((int)Month::MARCH):
		month = "�����";
		break;

	case((int)Month::APRIL):
		month = "������";
		break;

	case((int)Month::MAY):
		month = "���";
		break;

	case((int)Month::JUNE):
		month = "����";
		break;

	case((int)Month::JULY):
		month = "����";
		break;

	case((int)Month::AUGUST):
		month = "�������";
		break;

	case((int)Month::SEPTEMBER):
		month = "��������";
		break;

	case((int)Month::OCTOBER):
		month = "�������";
		break;

	case((int)Month::NOVEMBER):
		month = "������";
		break;

	case((int)Month::DECEMBER):
		month = "�������";
		break;

	default:
		month = "�� ������ ������";
		break;
	}

	switch (m_month)
	{
	case((int)Month::JANUARY):
	case((int)Month::FEBRUARY):
	case((int)Month::DECEMBER):
		season = "����";
		break;

	case((int)Month::MARCH):
	case((int)Month::APRIL):
	case((int)Month::MAY):
		season = "�����";
		break;

	case((int)Month::JUNE):
	case((int)Month::JULY):
	case((int)Month::AUGUST):
		season = "����";
		break;

	case((int)Month::SEPTEMBER):
	case((int)Month::NOVEMBER):
		season = "�����";
		break;

	default:
		month = "�� �����";
		break;
	}

	std::cout << "����: " << m_day << " " << month << " " << ((m_year < 0) ? (-m_year) : (m_year)) << ((m_year < 0) ? (" ���� �� �.�.") : (" ����")) << std::endl;
	std::cout << "����� ����: " << season << std::endl;
	
}