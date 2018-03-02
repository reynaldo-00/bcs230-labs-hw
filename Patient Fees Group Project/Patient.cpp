/*Timothy Wangenstein
Programming II
Patient Class Implementation*/

#include "Patient.h"

void PatientAccount:: setDays(int dayss) // function to set the amount of days. default is 1
{
  days = dayss;
}
void PatientAccount:: setDayRate(int dayRates) // function to change the defualt day rate
{
  dayRate = dayRates;
}
void PatientAccount :: addCharge(double money) // function to add a charge to the current charge.
{
  charge += money;
}