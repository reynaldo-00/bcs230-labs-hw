/*
Task2:
Run	the	following	skeleton	program	and	check	
its	output.

Step1: Complete	ToDo1	so	the	program	prints	
array	elements	using	pointers.

Step2: Complete	ToDo2	so	that	the	program	will	
find	the	prime	numbers	only. Do	Not	change	the	
functions	prototypes.	
*/

#include <iostream>
using namespace std;
//	function	prototype
void printElements(int *, int);
void findAllPrime(int *, int &);
bool isPrime(int);

int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    printElements(arr, size);
    findAllPrime(arr, size);
    cout << "==	Prime	Elements	==" << endl;
    printElements(arr, size);
    return 0;
}
void printElements(int *p, int sz)
{
    //ToDo1:	Display	all	elements
    for (int i = 0; i < sz; i++)
    {
        cout << *p++ << endl;
    }
}
void findAllPrime(int *p, int &sz)
{
    //	find	the	prime	numbers
    for (int i = 0; i < sz; i++)
    {
        if (isPrime(*p))
        {
            cout << *p << endl;
        }
        *p++;
    }
}

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
        return true;
    };
}
