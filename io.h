#ifndef SENECA_IO_H // replace with relevant names
#define SENECA_IO_H

namespace seneca {

	void printInt(int value, int fieldWidth);
	// erturns number of digits in an integer
	int intDigits(int value);
	// Performs a fool-proof integer entry assuming the user will only enter numeric values.
	// if the user enters non digit values, the function will hang in an endless loop.
	int getInt(int min, int max);
	// moves the cursor backwards
	void goBack(int n);
	// displays the user interface menu
	int menu(int noOfSamples);
	// prints samples error message
	void labelLine(int n, const char* label);
	// Draws a line
	void line(int n);
	// Your header file content goes here
	// Maximum number of samples in an graph
	
}
#endif
