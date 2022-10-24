#pragma once
#include <string>

class Date {

private:
	int month	= { 1 };
	int day		= { 1 };
	int year	= { 1990 };

public: 

	Date() = default;
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