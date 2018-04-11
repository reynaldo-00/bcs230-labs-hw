/*
Task3:
Write	a	program	that	dynamically	allocates	an	array	large	enough	to	hold	a	userdefined
number	of	test	scores.	Once	all	the	scores	are	entered,	the	array	should	be	
passed	to	a	function	that	sorts	them	in	ascending	order.	Another	function	should	be	
called	that	calculates	the	average	score.	The	program	should	display	the	sorted	list	
of	scores	and	the	averages	with	appropriate	heading.	Use	pointer	notation	rather	
than	array	notation	whenever	possible.	And	don’t	accept	a	negative	number	for	test	
scores.

*/

#include <iostream>
using namespace std;
//	function	prototype
void printElements(int *, int);
void findAllPrime(int *, int &);
bool isPrime(int x);
int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13, 15, 16, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    printElements(arr, size);
    findAllPrime(arr, size);
    cout << "==	Prime	Elements	==" << endl;
    printElements(arr, size);
    return 0;
}
void printElements(int *p, int sz)
{
    for (int i = 0; i < sz; i++)
        cout << *(p + i) << endl;
}
void findAllPrime(int *p, int &sz)
{
    int tempPrmCnt = 0;
    for (int i = 0; i < sz; i++)
        if (isPrime(*(p + i)))
            *(p + tempPrmCnt++) = *(p + i);
    sz = tempPrmCnt;
}
bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return false;
    return true;
}
