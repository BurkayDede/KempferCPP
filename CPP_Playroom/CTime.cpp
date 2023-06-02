#include "CTime.h"
#include <time.h>
#include <stdio.h>

CTime::CTime()
{
	time_t rawtime;
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	this->seconds = timeinfo->tm_sec;
	this->minutes = timeinfo->tm_min;
	this->hours = timeinfo->tm_hour;
}

CTime::CTime(int hours, int minutes, int seconds)
{
	this->seconds = seconds;
	this->minutes = minutes;
	this->hours = hours;
}

CTime::~CTime()
{
}

void CTime::setTime()
{
}

void CTime::printTime()
{


	printf("%02i:%02i:%02i", hours, minutes, seconds);

	
}

void CTime::readTime()
{
}
