#include "Date.h"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>


using namespace std;




// constructor
Date::Date(int m, int d, int y) {

	month = m;
	day = d;
	year = y;
}


void Date::setMonth(int m) {

	month = m;
}

void Date::setDay(int d) {

	day = d;
}

void Date::setYear(int y) {

	year = y;
}

// getters 

const int Date::getMonth() {

	return month;
}

const int Date::getDay() {

	return day;
}

const int Date::getYear() {

	return year;
}

// MONTHS

const string Date::MONTHS[12] = { "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", 
							      "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER" };

string Date::print() {
	
	stringstream ss;
	
	ss << left << setw(10) << MONTHS[month - 1];
	ss << left << setw(4) << day;
	ss << left << setw(5) << year << endl;
	
	return ss.str();
}

const bool Date::compare(Date &d1, Date &d2) {

	int month1 = d1.getMonth();
	int day1 = d1.getDay();
	int year1 = d1.getYear();

	int month2 = d2.getMonth();
	int day2 = d2.getDay();
	int year2 = d2.getYear();

	if (year1 < year2) {
		return true;
	}
	else if(year1 == year2){

		if (month1 < month2) {
			return true;
		}
		else if (month1 == month2) {
			
			if (day1 < day2) {
				return true;
			}
			else if (day1 == day2) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
