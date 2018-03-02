/*Sean Carroll
Programming II
Surgery Class Definition*/

#ifndef SURGERY
#define SURGERY

#include <iostream>
using namespace std;


class Surgery {

private:

//Costs of specific surgeries
const int heartSurgery = 5000;
const int backSurgery = 2500;
const int brainSurgery = 10000;
const int legSurgery = 1000;
const int armSurgery = 500;
int costOfSurgery;

public:

//Prototypes
Surgery();
Surgery(int);
void setSurgeryCost(int);
double getSurgeryCost();
};

#endif


