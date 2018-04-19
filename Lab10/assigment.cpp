/*
Christopher Cedeno
Lab 10
Problem:	download	the	attached	datafile.txt.	Read	the	file	and	then	create	a	
dynamic	array	that	stores	its	elements.
Your	code	should	use dynamic	memory	allocation, pointers,	to	find	the	sum	and	the	
average	of	all	numbers.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getLine(string);
void populateArray(string,double[]);
double getSum(int, double[]);
double getAvg(int, int);

int main()
{

  int *count;
  double *avg, *sum, *arrayptr;

  string fileName = "dataFile.txt";

  count = new int;
  sum = new double;
  avg = new double;

  *count = getLine(fileName);
  arrayptr = new double[*count];

  populateArray(fileName, arrayptr);
  
  *sum =  getSum(*count, arrayptr);
  *avg =  getAvg(*sum, *count);

  cout << "Sum : " << *sum << endl;
  cout << "Average : " << *avg << endl;

  delete [] arrayptr;
  delete count;
  delete sum;
  delete avg;
}

double getAvg(int sum, int count) {
  return sum / count;
}

double getSum(int count, double *arr) {
  double sum;

  for (int i = 0; i < count; i++)
  {
      // cout << sum << endl;
      sum += arr[i];
  };

  return sum;
}

void populateArray( string fname, double *arr){
  double selection;
  int count;
  ifstream ifile;
  ifile.open(fname);

  if (!ifile)
  {
    cout << "Error opening file" << endl;
  }
  else
  {
    while (ifile >> selection)
      {
        arr[count] = selection;
        // cout << arr[count]<< endl;
        count++;
      }
  }
  ifile.close();
}

int getLine(string fname){
  int count;
  double selection;

  ifstream ifile;
  ifile.open("dataFile.txt");

  if (!ifile)
  {
    cout << "Error opening file" << endl;
  }
  else
  {
    while (ifile >> selection)
    {
      count++;
    }
  }
  ifile.close();

  return count;
}

