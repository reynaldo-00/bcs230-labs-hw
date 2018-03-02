/*
Christopher Cedeno
Task2:
Write	a	program	that	modifies	the	previous	
text	file	(from	Task3)	as	follows:
1) Reverse	the	written	information.

2) Each information	item	should	be on	a	separate	line

3) Your	program	should	read (if	exist) the	file	first	
and then	rearrange	the	info.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    string fileName = "output.txt"; //name of file to be used 
    string selection; //selection used to loop through the data in file
    int lines; //store number of lines in document

    vector<string> fileData; // used to stoere the data from file in an array

    ifstream ifile; //initiates ifile for opening file
    ifile.open(fileName);//opens the file name associated with fileName variable

    ofstream ofile;//initiates ofile for writing to file

    if (ifile) //checks if file opened succesfully
    {

        while (ifile >> selection)//loops through info in file and adds it to array
        {
            // cout << selection << endl;
            fileData.push_back(selection);
        }

        lines = fileData.size();//puts size of array into a varible for ease of use later on
        // cout << lines << endl;

        ifile.close(); //closses file from ifile since it wont be nedded anymore
        ofile.open(fileName); //opens file for data to be re-written

        for (int i = 0; i < fileData.size(); i++) //loops for the length of array sotring file data
        {
            lines--; //minus 1 to go through array from end to start
            ofile << fileData[lines] << endl; //writes data to file
            // cout << fileData[lines] << endl;
        }
        ofile.close(); //closes file
    }
    else
    {
        cout << "Error opening files" << endl;//error when opening file
    }
}
