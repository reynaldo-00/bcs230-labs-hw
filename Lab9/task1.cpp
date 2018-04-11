/*
Task1:
Run	the	following	program	and	check	its	output.
Step1: Check	what	is	the	difference	between	local	
variables	and	global	variable.

Step2: Using	pointer	arithmetic	increment	x1Ptr	and	
then	print	its	value	and	print	its	contents.

Step3: Print	and	difference	between	the	address	of	x4	
and	the	value	of	x1Ptr,	what	do	you	get?	Why?

Step4: repeat	step3	when	all	variables	are	global.
Step5: print	foo	with	and without	().	
*/

#include <iostream>
using namespace std;

// int x1 = 20;
// int *x1Ptr = &x1;
// int x2 = 40;
// int x3 = 60;
// int x4 = 80;

int foo()
{
    return 19;
}
int main()
{
    int x1 = 20;
    int *x1Ptr = &x1;
    int x2 = 40;
    int x3 = 60;
    int x4 = 80;
    
    x1Ptr += 2;
    cout << &x1 << endl;
    cout << &x2 << endl;
    cout << &x3 << endl;
    cout << &x4 << endl;
    cout << x1Ptr - &x1 << endl;

    x1Ptr++;

    cout << x1Ptr << endl;
    cout << *x1Ptr << endl;

    cout << &x4 - x1Ptr << endl;

    return 0;
}