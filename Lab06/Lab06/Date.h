#pragma once
#include <string>

class Date {

private:
	int month;
	int day;
	int year;

public: 

	Date() {

		month = { 1 };
		day = { 1 };
		year = { 1990 };

	}
	Date(int, int, int);

	static const std::string MONTHS[12];

	//setters
	void setMonth(int);
	void setDay(int);
	void setYear(int);

	// getters
	const int getMonth();
	const int getDay();
	const int getYear();

	// rest
	std::string print();

	static const bool compare(Date &a, Date &b); 

};
