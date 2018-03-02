/*Sean Carroll
Programming II
Surgery Class Implementation*/


#include <iostream>
using namespace std;
#include "Surgery.h"

//Surgery Class Implementation


//Default constructor; sets cost of surgery to 0 
Surgery::Surgery()
{
	costOfSurgery = 0;
}
	
	
	
//Overloaded constructor; allows type of surgery to be entered,as respresented by an integer, and sets cost of that surgery	
Surgery::Surgery(int _typeOfSurgery)
	{
	//Function call to set the cost of surgery
		setSurgeryCost(_typeOfSurgery);
	}

	
//Sets cost of surgery by taking in the integer representation of the surgery
void Surgery::setSurgeryCost(int _typeOfSurgery)
{
//Switch statement that tests the integer representation of the surgery against the list of possible values, then sets the cost of surgery when matched
	switch (_typeOfSurgery) {
	case 1: costOfSurgery = heartSurgery;
		break;
	case 2: costOfSurgery = backSurgery;
		break;
	case 3: costOfSurgery = brainSurgery;
		break;
	case 4: costOfSurgery = legSurgery;
		break;
	case 5: costOfSurgery = armSurgery;
		break;
}
}

//Returns the cost of the surgery
	double Surgery::getSurgeryCost()
	{

		return costOfSurgery;
	}


