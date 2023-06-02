#pragma once
class CDate
{
	public:

		CDate();
		CDate(int day, int month, int year);
		~CDate();
		void setDate();
		void printDate();
		void readDate();

	private:
		
		struct tm* timeinfo;

		unsigned short int day;
		unsigned short int month;
		unsigned short int year;

};

