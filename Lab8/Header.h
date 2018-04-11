#include <iostream>
#ifndef HEADER
#define HEADER
using namespace std;

//create class prototype Weather
    //Record Date = Month, Start of week, end of Week 
    //Snow Depth
    //Set functions
    //Get Functions

class Day {
    private:
        string month;
        int day;
        double snow;

    public:

    void setDate(string mnth, int dy, double snw) {
        month = mnth;
        day = dy;
        snow = snw;
    };
    string getMonth() {
        return month;
    };

    int getDate() {
        return day;
    };

    double getSnow() {
        return snow;
    };
};

void selectionSort(Day [], int);


#endif
