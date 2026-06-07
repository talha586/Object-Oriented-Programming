#include "data.h"

date::date()
{
	day = 1;
	month = 1;
	year = 1926;
}

date::date(int d,int m,int y)
{
	cout << "Overloaded constructor called";
	day = d,month=m,year=y;
}

void date::print()
{
	cout << day << "/" << month << "/" << year;
}

void date::input()
{
	do
	{
		cout << "Enter the date:"; cin >> day;
	} while (day<=0|| day>=32);
	do
	{
		cout << "Enter the month:"; cin >> month;
	} while (month>=13|| month<=0);

	do
	{
		cout << "Enter the year:"; cin >> year;
	} while (year<=0);
}

int date::compare(date d3)
{
	if (year > d3.year)
	{
		return 1;
	}

	else if (year<d3.year)
	{
		return -1;
	}

	else
	{
		if (month>d3.month)
		{
			return 1;

		}
		else if(month<d3.month)
		{
			return -1;
		}
		else
		{
			if (day>d3.day)
			{
				return 1;
			}
			else if(day<d3.day)
			{
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
}
date date:: incrementmonth()
{
	date nd;
	nd.day = day;
	nd.month = month + 1;
	if (nd.month==13)
	{
		nd.month = month;
		nd.year = year + 1;
	}
	else
	{
		nd.year = year;
	}
	return nd;
}