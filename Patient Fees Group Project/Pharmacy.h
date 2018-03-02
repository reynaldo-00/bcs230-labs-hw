/*Ryan Rosario
Programming II
Pharmacy Class Implementation*/

#ifndef PHARMACY
#define PHARMACY
#include "Patient.h"


//Pharmacy Class holds values for five types of medications and updates the charge variable
//of the PatientAccount class with their values
class Pharmacy
{
	private:
		double antibiotic = 280;
		double insulin = 320; 
		double antihistamine = 100;
		double barbiturate = 50;
		double painkiller = 260;
		double medCharge; //Total charges from medication. 

	public:
		Pharmacy() //Constructor initializes medication charges to zero.
		{
			medCharge = 0;
		}

		void setMeds(int input); //Mutator prototype, updates medCharges variable
		void addMeds(PatientAccount &person)//Updates charge variable of PatientAccount object with value of medCharge variable
		{
			person.addCharge(medCharge);
		}

		double getMedCharge()//Returns the amount of charges incurred by medication
		{
			return medCharge;
		}
	
		
		
};

#endif // !PHARMACY
