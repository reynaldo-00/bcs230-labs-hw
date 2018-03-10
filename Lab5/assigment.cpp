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

const int MAX_NUM = 20;
const string romanNums[] = {" ", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X",
                            "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

int main()
{
    // int option;
    // option = printMenu();
    // changeNumber(option);
    // return 0;
    int decNum; // The user entered decimal number to be converted
    cout << "Decimal to Roman Numeral Converter \n";
    decNum = getValidNum();

    while (decNum != 0) // While the end sentinel has not been entered, process the number
    {
        cout << "The roman numeral equivalent of " << decNum << " is " << romanNums[decNum] << "\n";
        decNum = getValidNum();
    }
    return 0;
}

int getValidNum()
{
    int num;
    cout << "\nEnter a decimal number 1-" << MAX_NUM << " (or 0 to quit): ";
    cin >> num;

    while (num < 0 || num > 20)
    {
        cout << "That is not a valid number.\n"
             << "\nEnter a decimal number 1-" << MAX_NUM << ": ";
        cin >> num;
    }
    return num;
}

int int2Roman()
{
    int number;
    string roman;

    cout << "Enter -1 to quit" << endl;

    do
    {
        cin >> number;
        //change number to roman and print out

        cout << "Roman equivalent: " << roman << endl;
    } while (num == -1)
}

int roman2Int()
{
    int number;
    string roman;

    cout << "Enter -1 to quit" << endl;

    do
    {
        cin >> string;
        //change number to roman and print out

        cout << "Integer equivalent: " << number << endl;
    } while (num == -1)
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
}

int printMenu()
{

    int option;
    cout << "Select option 1 or 2" << endl;
    cout << "1. Int to Roman" << endl;
    cout << "2. Roman to Int" << endl;
    cin >> option;

    retun option;
}