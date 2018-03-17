/*
Christopher Cedeno
Problem)
1) Design a PayRoll class that has data members for an employee’s
hourly pay rate and number of hours worked.
2) Write a program with an array of eleven PayRoll objects.
3) The program should read the number of hours each employee
worked and their hourly pay rate (before tax) from a file and call
class function to store this information in the appropriate objects.
4) It should then call class function, once for each object, to return the
employee’s net pay after 20% tax deduction, so this information
can be displayed.
a. Sample data to test this program can be found in the
payroll.dat file located on Blackboard.
Submission	instructions
• Test	your	code	before	submission.
• Add	comments	to	explain	your	solution.
• Due	date	is	Friday 03/16/2018 @	11:59pm/
• You	are allowed	to	submit	late	with	-2%	per	day.
• Submission	will	not	be	available	after	Sunday March /18th/2018 @	
11:59pm.
• Check	rubric.
*/
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

/*
PayRoll class stores hours and hourly rate per person, 
able to set and get any specific value and get the pay 
before and after tax deduction
*/
class PayRoll
{

  private:
    double hours;
    double hourlyRate;

  public:
    PayRoll()
    {
        hours = 0;
        hourlyRate = 0;
    };
    PayRoll(double pr, double hr)
    {
        hours = pr;
        hourlyRate = hr;
    }
    double getHours()
    {
        return hours;
    };
    double getHrRt()
    {
        return hourlyRate;
    };
    void setHours(double pr)
    {
        hours = pr;
    };
    void setHrRt(double hr)
    {
        hourlyRate = hr;
    };
    double getPay()
    {
        // cout << "from getPay :" << hours << " " << hourlyRate << endl;
        return hours * hourlyRate;
    }
    double getPayAfterTax()
    {
        double total = getPay();
        // cout << "from payafter total :" << total << endl;
        double deduction = total * .20;
        // cout << "from payafter deduction :" << deduction << endl;
        return total - deduction;
    };
};

int main()
{

    const int SIZE = 11; //size of array as stated in documentation
    PayRoll empl[SIZE];  //creates array of PayRoll objects
    double selection;    //selection to store info for while loop
    bool isHours = true; //used to check if the data being read is hours
    int count = 0;       //count for while loop

    ifstream ifile;
    ifile.open("payroll.dat");

    if (!ifile)
    { //if error opening file
        cout << "Error opening file" << endl;
    }
    else
    {

        while (ifile >> selection)
        { //loops through data in file and stores each selection in selection
            if (isHours)
            {
                empl[count].setHours(selection); //sets hours to PayRoll object of the array
                isHours = false;                 //makes sure next selection is treated as hourly rate instead of horus
            }
            else
            {
                empl[count].setHrRt(selection); //sets hourly rate to payroll object of array
                isHours = true;                 // makes sure next selection is treated as hours and not hourly rate
                count++;                        // adds to count so when going back to hours its adding to the next object in the array
            }
        }
        ifile.close(); //closes file
    }

    for (int i = 0; i < SIZE; i++)
    { //loops through objects in array calling the getPayAfterTax() function
        cout << "Pay After Tax: " << empl[i].getPayAfterTax() << endl;
    }
}