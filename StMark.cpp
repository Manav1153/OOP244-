// StMarks.cpp
#include "StMark.h"
#include "graph.h"
#include "io.h"
#include "file.h"
#include <iostream>
using namespace std;
//using namespace seneca;

//void bubbleSort(StMark* studentArray, int size);
//bool printReport(const char* filename);


namespace seneca {
    void bubbleSortSeneca(StMark* studentArray, int size) {
        // Bubble sort implementation
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (studentArray[j].mark < studentArray[j + 1].mark) {
                    // Swap elements if they are in the wrong order
                    StMark temp = studentArray[j];
                    studentArray[j] = studentArray[j + 1];
                    studentArray[j + 1] = temp;
                }
            }
        }
    }

    bool printReport(const char* filename) {
        const int NUM_MARK_GROUPS = 10;
        StMark marks[MAX_NO_RECS];
        int recordsRead = 0;

        if (openFile(filename)) {
            // Read student marks
            recordsRead = readMarks(marks);

            // Check for errors in reading marks
            if (recordsRead <= 0) {
                cerr << "Error reading marks from file." << endl;
                closeFile();
                return false;
            }

            // Sort the array using bubble sort
            bubbleSortSeneca(marks, recordsRead);

            // Display the bar graph
            int histogram[NUM_MARK_GROUPS] = { 0 };
            for (int i = 0; i < recordsRead; i++) {
                int group = marks[i].mark / (100 / NUM_MARK_GROUPS);
                histogram[group]++;
            }

            printGraph(histogram, NUM_MARK_GROUPS, "Number of Students in Each Mark Group");

            // Display the sorted student records
            cout << "Sorted Student Records:" << endl;
            for (int i = 0; i < recordsRead; i++) {
                cout << (i + 1) << ": " << marks[i].name << " " << marks[i].surname << " [" << marks[i].mark << "]" << endl;
            }

            closeFile();
            return true;
        }

        cerr << "Error opening file: " << filename << endl;
        return false;
    }
}
