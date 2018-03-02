/*
Christopher Cedeno Problem 2
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 1008514753 ?
*/

#include <iostream>

using namespace std;

int num = 1008514753, largest, cnt;

int main()
{
    for (int i = 1; i <= num; i++) //loops from 1 to value of num
    {
        if (num % i == 0) //checks if num is divided evenly by current i value
        {
            cnt = 0;                                //presets cnt to 0 for use in next loop
            for (int j = 2; cnt == 0 && i > j; j++) //checks if its the first iteration of the loop and if the current i value is less than j
            {
                if (i % j == 0) //checks if current i value is divisible by current j value
                    cnt++;
            }
            /*
            if cnt is 0 it means the current i value is a 
            prime factor since it evely divided into num value and not 2
            */
            if (cnt == 0)
                largest = i;
        }
    }
    cout << largest << endl;
}