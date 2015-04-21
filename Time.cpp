#include "Time.h"
#include <iomanip>

Time::Time(int h = 0, int m = 0) :hours(h), minutes(m)
{
	if (h > 0 && h <= 23 && m >= 0 && m <= 59)
	{
		hours = h;
		minutes = m;
	}
	else
		std::cout << "Error, invalid time" << std::endl;
}

Time::~Time()
{}
void Time::set(int hours, int minutes)
{
	if (hours > 0 && hours <= 23 && minutes >= 0 && minutes <= 59)
	{
		Time::hours = hours;
		Time::minutes = minutes;
	}
	else
		std::cout << "Error, invalid time" << std::endl;
}

void Time::get(int &hours, int &minutes)
{
	hours = Time::hours;
	minutes = Time::minutes;
}

Time Time::operator++(int)
{
	Time temp(hours, minutes);
		minutes++;
	hours = hours + minutes/60;
	hours = hours % 24;
	minutes = minutes % 60;
	return temp;
}
std::ostream & operator << (std::ostream &os, Time &t)
{
	std::cout << std::setfill('0') << std::setw(2) << t.hours << ":" << std::setw(2) << t.minutes << std::endl;
	return os;
}