/*
Christopher Cedeno
Programing II
LAB 8
Problem:
Write a program that can be used by a ski resort to keep track of the local
snow conditions for one week. It should have seven-element array of
structures or class objects, where each structure or object holds a date
and the number of inches of snow in the base on that date. The program
should have the user input the name of the month, the starting and
ending date of the seven-day period being measured, and then the
seven base snow depths.
The program should then sort the data in the ascending order by base
depth and display the results (two functions one for sorting and one for
displaying the results). Here is the beginning of a sample report.
Snow Report December 12-18
Date Base
13 42.3
12 42.5
14 42.8
*/

#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int SIZE = 7;

int main() {

    string month;
    int dayNum;
    double snow;

    Day arr[SIZE];

    //ask for month name
    cout << "What month is it" << endl;
    cin >> month;

    //ask for start of week date
    cout << "What day in the month is it" << endl;
    cin >> dayNum;

    //snow depth for the seven days being recorded
    for (int i=0; i < SIZE; i++) {
        cout << "Whats the snow drop drop for " << endl;
        cout << month << " " << dayNum << ": ";
        cin >> snow;

        arr[i].setDate(month, dayNum, snow);
        snow = 0;
        dayNum++;
    };

    //sort array

    selectionSort(arr, SIZE);

    //print array in snow order

    cout << "Dates Sorted by snow drop: " << endl;
    for (int i=0; i < SIZE; i++) {
        cout << month << " " << arr[i].getDate() << " " << arr[i].getSnow() << endl;
    };

};


void selectionSort(Day a[] , int size) {
    int outer, inner, min;

    for (outer = 0; outer < size - 1; outer++) {     
        min = outer;
        for (inner = outer + 1; inner < size ; inner++) {
            if (a[inner].getSnow() < a[min].getSnow()) {
                min = inner;
            } 
        }
        Day temp = a[outer];
        a[outer] = a[min];
        a[min] = temp;
    }
}
