#pragma once
class CTime
{
public:

	CTime();
	CTime(int hours, int minutes, int seconds = 0);
	~CTime();
	void setTime();
	void printTime();
	void readTime();

private:

	struct tm* timeinfo;

	unsigned short int seconds;
	unsigned short int minutes;
	unsigned short int hours;

};

