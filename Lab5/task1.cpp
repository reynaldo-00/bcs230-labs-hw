/*
Task1:	
The following skeleton code
accepts 20 inputs as test scores for
students and stores them in an
array.
The scores should be between 1
and 100 (perfect score). In its
current form, the program reads
the values from the user and then
prints nothing.
Step1: Create a project and then
run the following skeleton code.
Step2: Modify the code so that, in
addition to what it does, it will:
• Print all the elements of the array.
• Print the average score.
• Change the fixed number of inputs (currently 20 test scores) to be any
positive number between 1 and 50.
• Create and use a function that counts how many scores are perfect.
• Count and report how many scores are less than 59
*/

#include <iostream>
using namespace std;

//Function prototype
int getScores(int[]);
int printScores(int[], int);
double avgScore(int[], int);
int orderArray(int[], int);

int main()
{
    const int SIZE = 20;
    int array[SIZE], numScores;
    double avg;

    cout << "This program will allow you to enter up to 20 scores \n"
         << "and willthn report how many perfect scores were entered \n\n";

    numScores = getScores(array);

    printScores(array, numScores);
    avg = avgScore(array, numScores);
    cout << "Average: " << avg << endl;

    return 0;
}

int getScores(int array[])
{

    int num, pos = 0;

    do
    {
        cout << "Enter an score 0 - 100 (or -1 to quit): ";
        cin >> num;

        if (num >= 0 && num <= 100)
        {
            array[pos] = num;
            pos++;
        }
        else if (num > 100)
        {
            cout << "Invalid score: Score may not be greater than 100 \n\n";
        }

    } while (num >= 0 && pos < 20);
    return pos;
}

int printScores(int array[], int num)
{

    for (int i = 0; i <= num; i++)
    {
        cout << array[num] << endl;
    }
}

double avgScore(int array[], int num)
{
    int total = 0;
    double avg;

    for (int i = 0; i <= num; i++)
    {
        total += array[num];
    }

    avg = total / num;

    return avg;
}

int orderArray(int array[], int size)
{
    int nArray[size], pos = 0;

    for (int i = 0; i <= 100; i++)
    {

        for (int j = 0; i <= size; j++)
        {
            if (array[j] == i)
            {
                nArray[pos] = array[j];
                pos++;
            }
        }
    }
}