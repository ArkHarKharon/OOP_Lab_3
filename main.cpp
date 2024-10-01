#include "NewDate.hpp"

int main()
{
	setlocale(0, "");

	Date date(1, 5, 2010);
	date.print_date();

	NewDate new_date(9, 9, 2005);
	new_date.print_date();
}