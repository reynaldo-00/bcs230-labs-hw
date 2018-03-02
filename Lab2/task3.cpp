/*
Christopher Cedeno
Task3:
Checking	if	the	number	is	prime,	even,	and/or	odd	is	a	common	task	in	
programming.	 Write a	program that:
1) Has	a	function	to	check	if a	number	is	even	or	odd.
2) Has	a	function	to	check	if	a	number	is	prime.
3) Ask	the	user	to	enter	a	number.
4) Print	the	output	on	the	computer	screen.
*/

#include <iostream>

using namespace std;

int checkEven(int num)
{
    if (num % 2 == 0) //checks if number is evenly divided by 2 to check if its even
    {
        cout << "The number " << num << " is even" << endl;
    }
    else
    {
        cout << "The number " << num << " is odd" << endl;
    }
    return 0;
}

int checkPrime(int num)
{
    bool isPrime = true;
    for (int i = 2; i <= num / 2; ++i) //checks if number is prime
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime) //prints out result depending if number is prime or not
    {
        cout << "The number " << num << " is a prime number" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a prime number" << endl;
    }

    return 0;
}


int main()
{
    int num;
    cout << "Enter a number" <<endl;
    cin >> num;

    checkEven(num); //calls checkEven() function throwing it the num we got from user
    checkPrime(num); //calls checkPrime() function throwing it the num we got from user

}