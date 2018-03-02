/*Timothy Wangenstein
Programming II
Patient Class Implementation*/

#include <iostream>
#ifndef PATIENT
#define PATIENT
using namespace std;

class PatientAccount
{
  private: // Creating the variables needed for the PatientAccount class
  int days = 1; // setting the default days as 1;
  double charge = 0, dayRate= 100; // creating the charge and dayRate variables and setting the default day rate to 100.
  
  public:
  void setDayRate(int); // function to change the Day rate
  void setDays(int); // function to change the amount of days
  void addCharge(double); // function to add a charge
  void addDay(){days+=1;} // function to increment the days variable by one
  int checkOut(){return charge +(days * dayRate);} // function to get the total of charge and amount charged for the amount of days.
  int getDays(); // function to get the number of days
  int getCharge();// function to get the current charge
  int getDayRate(); // function to get the dayRate
};

#endif