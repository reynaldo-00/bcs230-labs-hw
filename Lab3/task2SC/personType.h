/*
Step2: Modify the class PersonType
so that, in addition to what this code
does, it will:
• Set the first name only.
• Set the last name only.
• Store and set the middle name.
• Check whether a given first name
is the same as the first name of this
person.
• Check whether a given last
name is the same as the last
name of this person.
• Repeat running the program
through the use of do-while.
• Draw a UML diagram to depict
PersonType’ class.
*/
#include <string>
#include <iostream>
using namespace std;

class personType
{
public:
    void print() const;
    void setName(string first, string last){
        firstName = first;
        lastName = last;
    };
    void setName(string first, string middle, string last){
        firstName = first;
        middleName = middle;
        lastName = last;
    };
    void setFirstName(string name){
        if ( name == firstName ){
            cout << "Given name is already assigned";
        } else {
            firstName = name;
        }
    };
    void setLastName(string name){
        if ( name == lastName ){
            cout << "Given name is already assigned";
        } else {
            lastName = name;
        }
    };
    void setMiddleName(string name){
        if ( name == middleName ){
            cout << "Given name is already assigned";
        } else {
            middleName = name;
        }
    };
    string getFirstName() const {
        return firstName;
    };
	string getLastName() const {
        return lastName;
    };
	string getMiddleName() const {
        return middleName;
    };
    personType(string first = "", string last = "");
private:
    string firstName; 
    string lastName;
    string middleName;
};
