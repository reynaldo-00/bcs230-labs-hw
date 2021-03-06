#include <iostream>
using namespace std;

const int SIZE = 3;  // Arrays will be 2-D 3x3 arrays

// Function prototype
void inputMagicSq(int[][SIZE],int);
void showArray (int[][SIZE]);
bool isMagicSquare(int[][SIZE]);

int main()
{   
    int array1[SIZE][SIZE];             
    cout << "Enter square elements 3x3. \n\n";
    //ToDo 1: call the inputMagicSq to enter values 
    inputMagicSq(array1, SIZE);
    cout << "You entered. \n\n";
    //ToDo 2:  call showArray to print elements
    showArray(array1);
    //ToDO 3: check if the square is magic or not
    isMagicSquare(array1);
    return 0;
}

/*********************************************************************
 *                             showArray                             *
 * This function displays the contents of the 2D array passed to it. *
 *********************************************************************/
void showArray (int A[][SIZE])
{
    // ToDo: print the square elements 
        for( int i=0; i < SIZE; i++ ) {
            for( int j=0; j < SIZE; j++){
                cout << A[i][j] << "\t";
            }
        }
}

/*********************************************************************
 *                             inputMagicSq                          *
 * This function reads the contents of the 2D array.                 *
 *********************************************************************/
void inputMagicSq(int sqArr[][SIZE], int size){
    //ToDo: read square elements
    int num;
    for( int i=0; i < size; i++ ) {
        for( int j=0; j < size; j++){
            cin >> sqArr[i][j];
        }
    }
}

/***************************************************************
 *                           isMagicSquare                     *
 * This Boolean function determines if the 3 x 3 array of      *
 * integers passed to it is a magic square or not. A magic     *
 * square must contain one instance of each digit 1-9 and      *
 * every row, column, and diagonal must sum to the same value. *
 ***************************************************************/
bool isMagicSquare(int A[][SIZE])
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    
    // ToDo: Check column sums
    for (int row = 0; row < SIZE; row++)
    {
       // ToDo: Check each column seperately 
       sum1 += A[row][0];
       sum2 += A[row][1];
       sum3 += A[row][2];
    }
    if (!(sum1 == sum2 && sum2 == sum3))
        return false;
        
    // If column sums are OK, check row sums
    // But first reinitialize the accumulators
    sum1 = sum2 = sum3 = 0;

    for (int col = 0; col < SIZE; col++)
    {
       // ToDo: Check each row seperately 
       sum1 += A[0][col];
       sum2 += A[1][col];
       sum3 += A[2][col];
    }
    if (!(sum1 == sum2 && sum2 == sum3))
        return false;

    // If row sums are also OK, compute the 2 diagonal sums
    // Let sum3 continue to hold the value the diagonal sums should equal
    sum1 = A[0][0] + A[1][1] + A[2][2];  // Right diagonal
    sum2 = A[0][2] + A[1][1] + A[2][0];  // Left diagonal
    if (!(sum1 == sum2 && sum2 == sum3))
        return false;

    // If we got this far. Everthing adds up to the same value.
    return true;
}
