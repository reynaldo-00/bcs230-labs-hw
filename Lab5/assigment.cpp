/*
Write	a	program	that	allows the	user	to	convert	any	integer	number	to	Roman	
numeral	and	the	other	way	around.
- You	should	create	and	print	a	menu	that	allows the	user	to	select	either	
Roman to	Int 		or			 Int	to	Roman.
- If	one	option	is	selected then	you	should	promote the	user to	enter	the	
number	and	then	you	print	the	equivalence in	the	other	system.
- Validate	input,	i.e	Roman	numerals	should	be	greater or	equal I.
- Repeat	until	the	user	enter	-1 (main	menu).
• You	should	use	at	least	one	class	(.h	and	.cpp).
• Test	your	code	before	submission.
• Submit	your	code	before	Tuesday	March/06 @	11:59pm
• The	submission	page	to	be	available	till	Friday	March/09th 11:59pm	
with	-10%	penalty	per	day.
*/

#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int getValidNum();

int printMenu();
int changeNumber(int);
int int2Roman();
int roman2Int();

int main()
{
    int option;
    option = printMenu();
    changeNumber(option);
    return 0;
}   

int int2Roman()
{
    int number;
    string roman = "";

    do
    {
        cout << "Enter Integer or 0 to quit" << endl;
        cin >> number;
        if(number == 0){
            break;
        }
        //change number to roman and print out

        cout << "Roman equivalent: " << roman << endl;
    } while (number != 0);
    return 0;
}

int roman2Int()
{
    int number, num;
    string roman = "";

    do
    {
        cout << "Enter Roman numeral or q to quit" << endl;
        cin >> roman;
        if(roman == "q"){
            break;
        }
        //change number to roman and print out

        cout << "Integer equivalent: " << number << endl;

    } while (roman != "q");
    return 0;
}

int changeNumber(int option)
{

    switch (option)
    {
    case 1:
        int2Roman();
        break;
    case 2:
        roman2Int();
        break;
    }
    return 0;
}

int printMenu()
{

    int option;
    cout << "Select option 1 or 2" << endl;
    cout << "1. Integer to Roman" << endl;
    cout << "2. Roman to Integer" << endl;
    cin >> option;

    return option;
}