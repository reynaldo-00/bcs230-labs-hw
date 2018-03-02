/*
Christopher Cedeno
Write	a	program	that	creates	a	text	file	on	your	machine.
1)	name	the	file	output.txt

2)	write	your	name,	department,	college,	current	date,	and	your	course	
code	on	a	single	line. Information	is separated	using	a	space	‘	 ‘.

3)	check	where	the	file	is	located	on	your	hard	disk	drive
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream outFile;

    string fileName = "output.txt";

    string name = "Chris";
    string dept = "ComputerPrograming";
    string school = "Farmingdale";
    string date = "02/09/2018";
    string course = "BCS230";

    outFile.getloc();

    outFile.open(fileName);

    if (outFile.is_open())
    {
        cout << fileName << " Opened Succesfully\n";

        cout << "Writing to file " << fileName << endl;
        outFile << name << " ";
        outFile << dept << " ";
        outFile << school << " ";
        outFile << date << " ";
        outFile << course << " ";
    }
    else
    {
        cout << fileName << " cant be opened \n";
    }

    outFile.close();
    cout << fileName << " Closed \n";
}
