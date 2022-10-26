#include <vector>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
#include "Date.h"


using namespace std;

int main(int argc, char const* argv[]) {

	// read from a file
	/**/  //  Reading from a file yo
	//*********************** READ THE TEXT FILE

	ifstream readFile;

	int array[100];
	int count = 0;

	readFile.open("dates.txt");

	if (readFile.is_open()){
		
		readFile >> array[count]; // read first number
		count++;
		while (!readFile.eof()) {
			readFile >> array[count];
			count++;
		}
	}
	readFile.close();
	//********************** END OF READING

	// just outputting it for fucks sake
	//for (int i = 0; i < 13; i++) {
	//	cout << array[i] << " ";
	//}
	

	// objects and vector here
	
	
	vector<Date> dates;
	
	// assign the instances to the dates from the file
	for (int i = 1; i < count; i += 3) {
		
		Date d(array[i], array[i + 1], array[i + 2]);

		dates.push_back(d);
		/*
		d[place].setMonth(array[i]);
		d[place].setDay(array[i + 1]);
		d[place].setYear(array[i + 2]);
		
		place++;

		// add all instances into the vector
		for (int i = 0; i < array[0]; i++) {
		dates.push_back(d[i]);
		}
		*/
	}


	//COMPARE

	sort(dates.begin(), dates.end(), Date::compare);

	// PRINT

	ofstream outFile;

	outFile.open("output.txt");

	for (auto &dates : dates) {
		//cout << "Date: " << Date::MONTHS[dates[i].getMonth() - 1] << "/" << dates[i].getDay() << "/" << dates[i].getYear() << endl;

		//output += dates[i].print();
		outFile << dates.print();
	}
	
	outFile.close();
	
	
	// pure command line file reader
	/*
	int ints[100];

	for (int i = 1; i < argc; i++) {
		// convert command line arguments to int
		ints[i] = strtol(argv[i], NULL, 10);
		cout << ints[i] << endl;
	}
	*/

	return 0;
}
