/*
Attached on Blackboard:
1- inputFile.txt
• Write a program that reads the numbers from the attached file and
place them in an array.
• Print all the elements of the array using regular for-loop.
• Create a text file called output.txt and write to it the average,
minimum and maximum values separated by tab space.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


double getAvg(vector<double>);
double getMin(vector<double>);
double getMax(vector<double>);
void useVectors();

void readValueFromFile(string fn, double[]);
void printElementOfArray(double[], int);
void writeToFile(double, double, double);
void useArrays();


int main () {

    useVectors();

    // useArrays();

    return 0;
}

void useVectors() {

    string fileName = "inputFile.txt";
    string outputName = "output.txt";
    double selection, avg, min, max;
    vector<double> fileData;

    ifstream ifile;
    ofstream ofile; 
    ifile.open(fileName);

    if ( !ifile ){
        cout << "Error opening file" << endl;
    } else {

        while ( ifile >> selection ) {
            fileData.push_back(selection);
        }
        ifile.close();

        for( int i=0; i < fileData.size(); i++){
            cout << fileData[i] <<endl;
        }
    }

    avg = getAvg(fileData);
    min = getMin(fileData);
    max = getMax(fileData);

    ofile.open(outputName);

    ofile << avg << "\t" << min << "\t" << max << endl;

    ofile.close();
}

void useArrays() {
    const int ISIZE=13;
    double min1, max1, avrg1, sum, array[ISIZE];


    readValueFromFile("inputFile.txt", array);
    printElementOfArray(array, ISIZE);

    min1 = array[0];
    max1 = array[0];

    for ( int i=0; i < ISIZE; i++ ) {
        sum += array[i];
        if(array[i]<min1)
            min1=array[i]
        if(array[i]>max)
            max1=array[]
    }

    writeToFile(avg1, min1, max1);
}


void writeToFile(double avg, double min, double max) {
    ofstream oFile("output.txt");
    oFile << avg << "\t" << min << "\t" << max << endl;
}

void printElementOfArray(double array, int size){
    for( int i=0; i < size; i++ ){
        cout<< array[i] << endl;
    }
}

void readValueFromFile( string fn, double array[]) {
    double temp, int i=0;
    ifstream inFile(fn);

    while( inFile >> temp ){
        array[i++] = temp;
        
    }

}

double getAvg(vector<double> data) {
    double total, avg, num;
    int size = data.size();

    for ( double num : data ){
        total += num;
    }

    avg = total / size;

    // cout << "average is " << avg << endl;

    return avg;
}

double getMin(vector<double> data) {
    double min = 0;

    for ( double num: data ){
        if (min == 0) {
            min = num;
        }
        if( num < min ){
            min = num;
        }
    }

    // cout << "Min is " << min << endl;
    return min;
}

double getMax(vector<double> data) {
    double max = 0;

    for ( double num: data ){
        if (max == 0) {
            max = num;
        }
        if( num > max ){
            max = num;
        }
    }

    // cout << "max is " << max << endl;
    return max;
}