/*
Christopher Cedeno
Programing II
Main program
*/

/*
desing a menu that allows the user to
1. Enter type of surgery
2. Enter One or more medications
3. Check Patient out of hospital
4. When patient checks out total charges should be displayed
*/

#include <iostream>
#include "Surgery.h"
#include "Pharmacy.h"
#include "Patient.h"

using namespace std;

int checkAction(int);

int main()
{

    int total = 0, action, days, surgeryOutcome, medOutcome, medCost;

    bool surgeryEntered = false;

    PatientAccount pat1;
    Pharmacy pharm1;

    /*
    Display Menu
    Enter number for action
    1.Enter Surgery
    2.Enter Medications
        -Ask to enter more
    3.Check patient out of hospital
        -Ask for days treated
        -Display patient's total cost's
    */

    do //loops through options until they decide to check out
    {
        //main menu
        cout << "Enter number for action" << endl;
        cout << "1.Enter Surgery" << endl;
        cout << "2.Enter Medication" << endl;
        cout << "3.Check Patient out" << endl;
        cin >> action;

        //checks if user input number thats less than 3 and greater than 1 if not it clears the input and asks again
        if (cin.fail() || action > 3 || action < 1)
        {
            cout << "INVALID OPTION: Please input a valid number " << endl;
            cin.clear();                                                   // reset failbait
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
        }
        else if (action == 1) //User input Surgery
        {
            if (surgeryEntered == true) //Sergery already given
            {
                cout << "Surgery already entered" << endl;
            }
            else
            {
                surgeryOutcome = checkAction(action);   //Gets users surgery of choice
                Surgery surg1(surgeryOutcome);          //Creates surgery object with surgery of choice
                pat1.addCharge(surg1.getSurgeryCost()); //adds the cost of surgery to patient's bill
                surgeryEntered = true;
            }
        }
        else if (action == 2) //User input medication
        {
            do //Loops medication options until user selects to be done
            {  //Gets medication choice
                medOutcome = checkAction(action);
                if (medOutcome != 6) //if user did not choose to stop inputing medication
                {
                    pharm1.setMeds(medOutcome); //updates the cost of medication acording to user option
                }
                else
                {
                    pharm1.addMeds(pat1); //Updates patient charge when done entering medicaitons
                }
            } while (medOutcome != 6);
        }
        else if (action == 3) //User checking out patient
        {
            days = checkAction(action);                                //ask user for ammount of days in hospital
            pat1.setDays(days);                                        //Sets the days in patient class
            total = pat1.checkOut();                                   //gets bill total
            cout << "Total for hospital stay is : $" << total << endl; //displays bill total
        }

    } while (action != 3);
}

int checkAction(int a)
{
    switch (a)
    {
    case 1:
        int typeOfSurgery;
        cout << "Enter number of surgery" << endl;
        cout << "1.Heart Surgery $500" << endl;
        cout << "2.Back Surgery $2500" << endl;
        cout << "3.Brain Surgery $10000" << endl;
        cout << "4.Leg Surgery $1000" << endl;
        cout << "5.Arm Surgery $500" << endl;
        cin >> typeOfSurgery;
        return typeOfSurgery;
    case 2:
        int typeOfMedication;
        cout << "Enter number of medication" << endl;
        cout << "1.Antibiotic $280" << endl;
        cout << "2.Insulin $320" << endl;
        cout << "3.Antihistamine $100" << endl;
        cout << "4.Barbiturate $50" << endl;
        cout << "5.Painkiller $260" << endl;
        cout << "6. Done entering Medication" << endl;
        cin >> typeOfMedication;
        return typeOfMedication;
    case 3:
        int days;
        cout << "How many days has the pateint been in hospital ($100 a day)" << endl;
        cin >> days;
        return days;
    }
}
