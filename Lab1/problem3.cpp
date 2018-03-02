/*
Christopher Cedeno Problem 3
2520 is the smallest number that can be divided by each 
of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly 
divisible by all of the numbers from 1 to 14?
*/

#include <iostream>

using namespace std;

int main()
{
    //Brute Force method
    int i = 14;

    while (i % 2 != 0 || i % 3 != 0 || i % 4 != 0 || i % 5 != 0 ||
           i % 6 != 0 || i % 7 != 0 || i % 8 != 0 || i % 9 != 0 ||
           i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
           i % 14 != 0) // Checks if i is evenly divisible by numbers 2-14
    {
        i += 14; //Changes i in increments of 14 to save time
    }

    cout<<i<<endl; //Prints out i

}