/*Ryan Rosario
Programming II
Pharmacy Class Implementation*/

#include "Pharmacy.h"

/*	Main program will ask user to enter a number between 1 and 5.
	This input is passed to this function who uses it to determine 
	which medication to add to medCharge variable  */  

void Pharmacy::setMeds(int input)
{
	switch (input)
	{
		case 1 : medCharge += antibiotic;
					break;
		case 2 : medCharge += insulin;
					break;
		case 3 : medCharge += antihistamine;
					break;
		case 4 : medCharge += barbiturate;
					break;
		case 5 : medCharge += painkiller;
					break;
	}

}