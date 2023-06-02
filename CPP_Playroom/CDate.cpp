#include "CDate.h"
#include <time.h>
#include <stdio.h>

CDate::CDate()
{	
	time_t rawtime;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	
	this->day = timeinfo->tm_mday;
	this->month = timeinfo->tm_mon;
	this->year = timeinfo->tm_year + 1900;

}

CDate::CDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;

}

CDate::~CDate()
{
}

void CDate::setDate()
{
}

void CDate::printDate()
{

	printf("%02i.%02i.%04i", day, month, year);

	
}

void CDate::readDate()
{
}
