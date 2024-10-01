#include "Date.hpp"

Date::Date(int day, int month, int year) 
{
	if (day <= 0 or month <= 0) //������������� ��� ������ ��� ��� �� �.�.
	{
		std::cout << "������������� �������� ����! ������������ ���� �� ��������� - 1 ������� 2024 ����" << std::endl; //���� �� ��������� - ���� ��������� ������ ������ (������ �� � ���)
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if (month > 12)
	{
		std::cout << "����� ������ �� ����� ���� ������ 12! ������������ ���� �� ��������� - 1 ������� 2024 ����" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if (month == (int)Month::FEBRUARY and day > 29)
	{
		std::cout << "� ������� �������� 29 ����! ������������ ���� �� ��������� - 1 ������� 2024 ����" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if ((month % 2) == 0 and day > 30)
	{
		std::cout << "� ������ ������ �� ����� ���� ������ 30 ����! ������������ ���� �� ��������� - 1 ������� 2024 ����" << std::endl;
		m_day = 1;
		m_month = (int)Month::OCTOBER;
		m_year = 2024;

		return;
	}

	if ((month % 2) == 1 and day > 31)
	{
		std::cout << "� �������� ������ �� ����� ���� ������ 31 ���! ������������ ���� �� ��������� - 1 ������� 2024 ����" << std::endl;
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

	std::cout << "����: " << m_day << " " << month << " " << ((m_year < 0)?(-m_year):(m_year)) << ((m_year < 0) ?(" ���� �� �.�.") : (" ����")) << std::endl;
}