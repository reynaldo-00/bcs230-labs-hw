/*
Task1:
Population (problem 17 in page 404)
In a population, the birth rate is the percentage increase of the population due
to births, and the death rate is the percentage decrease of the population due
to deaths. Write a program that asks for the following:
• The starting size of a population (minimum 2) (Prompt Enter starting size: )
• The annual birth rate (Prompt Enter annual birth rate: )
• The annual death rate (Prompt Enter annual death rate: )
• The number of years to display (minimum 1) (Prompt Enter years to
display: )
*/

#include <iostream>
#include <cmath>
using namespace std;

//Write a prototype for a function called projectPopSize(..)
int projectPopSize(int, double, double);

// Write a prototype for a function called dataEntry(..)
void dataEntry(int&, double& , double&, int&);

int main()
{
    int startSize, endSize;
    double birthRate, deathRate;
    int numYears;

    dataEntry(startSize, birthRate, deathRate, numYears);

    // call the data input function
    for (int i = 1; i <= numYears; i++)
    {
        // compute the endSize
        endSize = projectPopSize(startSize, birthRate, deathRate);
        cout << "Year " << i << ": " << startSize << " - " << endSize << endl;
        // update start size
        startSize = endSize;
    }
    return 0;
}

// Implement your functions here
int projectPopSize(int startSize, double birthRate, double deathRate)
{
    // cout << startSize << " " << birthRate << " " <<  deathRate << endl;
    // double endSize = startSize * 1 + birthRate * 1 - deathRate;
    double endSize = startSize * (1 + birthRate) * (1 - deathRate);
    endSize = floor(endSize);
    return endSize;
}

void dataEntry(int &startSize, double &birthRate, double &deathRate, int &numYears)
{
    cout << "Enter starting size: " << endl;
    cin >> startSize;
    cout << "Enter Anual birth rate: " << endl;
    cin >> birthRate;
    birthRate = birthRate / startSize;
    // cout << birthRate<< endl;
    cout << "Enter Anual death rate: " << endl;
    cin >> deathRate;
    deathRate = deathRate / startSize;
    // cout << deathRate << endl;
    cout << "Enter years to display: : " << endl;
    cin >> numYears;

}