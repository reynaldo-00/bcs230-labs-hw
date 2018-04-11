#include<iostream>
#include<string>
#include<cctype>
using	namespace	std;
//	Function	prototype
void	selectionSort(string	[],	int);
string	upperCaseIt(const	string);
void	displayNames(const	string	[],	int);
int	main(){
const	int	SIZE	=	20;
//	Set	up	the	array	of	strings,	in	this	case	names
string	name[SIZE]	=	
{	"Collins,	Bill",		"Smith,	Bart",		"Michalski,	Joe",	"Griffin,	Jim",
		"Sanchez,	Manny",	"Rubin,	Sarah",	"Taylor,	Tyrone",	"Johnson,	Jill",	
		"Allison,	Jeff",		"Moreno,	Juan",	"Wolfe,	Bill",				"Whitman,	Jean",
		"Moretti,	Bella",	"Wu,	Hong",					"Patel,	Renee",			"Harrison,	Rose",
		"Smith,	Cathy",			"Conroy,	Pat",		"Kelly,	Sean",				"Holland,	Beth"	};
//	Call	a	function	to	sort	the	strings
selectionSort(name,	SIZE);
//	Call	a	function	to	display	the	(now	sorted)	strings
			cout	<<	"The	names	in	sorted	order	are:	\n\n";
			displayNames(name,	SIZE);
			return	0;
}
void	selectionSort(string	name[],	int	numStrings	){
int	startScan,	minIndex, inner;
string	minValue;
//	ToDo	1:	Sort	the	strings
    for (startScan = 0; startScan < numStrings - 1; startScan++) { 
        minIndex = startScan;
        for (inner = startScan + 1; inner < numStrings ; inner++) {
            if (name[inner] < name[minIndex]) {
                minIndex = inner;
            } 
        }
        string temp = name[startScan];
        name[startScan] = name[minIndex];
        name[minIndex] = temp;
    }



}
void selectionSort(int a[] , int size) {
    int outer, inner, min;
    for (outer = 0; outer < size - 1; outer++) { 
        min = outer;
        for (inner = outer + 1; inner < size ; inner++) {
            if (a[inner] < a[min]) {
                min = inner;
            } 
        }
        int temp = a[outer];
        a[outer] = a[min];
        a[min] = temp;
    }
}
string	upperCaseIt(const	string	stringIn){
string	s	=	stringIn;				 //	Local	copy	of	stringIn	we'll	uppercase
//ToDo	2:	convert	the	string	to	uppercase
return	s;
}
void	displayNames(const	string	name[],	int	numNames){
//ToDo	3:	Print	all	elements	(numNames)	of	the	string	array	(name)
for ( int i =0; i < numNames; i++ ) {
    cout << name[i] << endl;
}
}