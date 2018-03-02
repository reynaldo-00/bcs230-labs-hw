/*
Christopher Cedeno
Attached	(on	Blackboard)	is	a	dataset file called	‘IRIS.csv’.	Write	a	C++	program	that	does	the	
followings:
1- Report	how	many	lines	in	the	file.
2- How	many	columns	in	each	row.
3- How	many	different	classes	in	the	file	(last	column)	
4- You	should	have at	least	one	function	in	your	solution.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int checkClasses(vector<string> &fileData, int classes = 0)
{
    /*
    transfer class from fileData to new array
    check if the next value already exist in new array
    if not add it
    */
    int size = fileData.size();
    vector<string> newData;
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        bool classExists = false;//resets value to false each loop iteration

        for (int j = 0; j <= newSize; j++)//checks if current class in filedata is equal to any class in newData array
        {
            if( newSize == 0 ){ //checks if newSize hasnt been reassinged from 0 therfore being first iteration of loop
                newData.push_back(fileData[i]);
            } 
            else if (fileData[i] == newData[j]) //checks if current class in filedata is equal to current class in newData array
            {
                classExists = true; //if it finds a duplicate class it stops checking rest of file since theres already a duplicate
            }
        }
        if (classExists == false) // if the the previous loop failed to find a matching class then add current class to newData array
        {
            newData.push_back(fileData[i]);
            newSize = newData.size(); //updates size of newData Array
        }
    }

    classes = newData.size();

    return classes;
}

int main()
{

    string fileName = "IRIS.csv";
    string selection;
    vector<string> fileData;

    int lines = 0, columns = 0, classes = 0, stringSize = 0;

    ifstream ifile;
    ifile.open(fileName);

    while (ifile >> selection) //loops through calsses in file
    {
        fileData.push_back(selection);//adds classes to array 
        lines++;// increments lines to get total number of lines at the end
        stringSize = selection.size(); //get current class string size

        if (columns < stringSize) //if column is smaller than current class string size update columns value
        {
            columns = stringSize;
        }
    }

    ifile.close(); //close file

    classes = checkClasses(fileData); //calls checkClasses() function

    cout << "File has:" << endl;
    cout << lines << " lines" << endl;
    cout << columns << " columns" << endl;
    cout << classes << " classes" << endl;
}