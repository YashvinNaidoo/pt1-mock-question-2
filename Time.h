#ifndef TIME_H
#define TIME_H
#include <iostream>

class Time{
private:
	int hours;
	int minutes;
public:
	Time(int hours, int minutes);
	~Time();
	void set(int hours, int minutes);
	void get(int &hours, int &minutes);
	Time operator++(int);
	friend std::ostream &operator<<(std::ostream &os, Time &t);
};
#endif
