#ifndef SENECA_GRAPH_H // replace with relevant names
#define SENECA_GRAPH_H
const int GRAPH_WIDTH = 65;
namespace seneca {
	
	

	void getSamples(int samples[], int noOfSamples);
	// Finds the largest sample in the samples array, if it is larger than 70,
	// therwise it will return 70. 
	int findMax(int samples[], int noOfSamples);
	// Prints a scaled bar relevant to the maximum value in samples array
	void printBar(int val, int max);
	// Prints a graph comparing the sample values visually 
	void printGraph(int samples[], int noOfSamples, const char* label);
	// prints the int value in width of fieldWidth


	// Your header file content goes here
	// Maximum number of samples in an graph
	
}
#endif