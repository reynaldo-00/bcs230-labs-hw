#include	<iostream>
using	namespace	std;
bool	searchList(long	[],	int,	long);	//	Function	prototype
const	int	SIZE	=	18;
int	main()
{
							long	accounts[SIZE]	=	
{5658845,		4520125,		7895122,		8777541,		
8451277,		1302850,8080152,		4562555,		
5552012,		5050552,		7825877,		1250255,
1005231,		6545231,		3852085,		7576651,		
7881200,		4581002,	};
long	acctNum;
bool found;
cout	<<	"Please	enter	a	7-digit	account	number:	";
//Todo	1:		Read	the	input	value
cin >> acctNum;
//	ToDo	2:	check	if	the	account	number	is	valid
found = searchList(accounts, SIZE, acctNum);
//	ToDo	3:	print	if	found
if ( found ) {
    cout << "Account Number Is Valid" << endl;
} else {
    cout << "Account Number Is Invalid" << endl;
}
return	0;
}
bool	searchList(long	list[],	int	numElems,	long	value)
{
bool	found	=	false;

//	ToDO		provide	implementation	of	the	linear	search	here
for ( int i= 0; i < numElems; i++) {
    if (list[i] == value){
        found = true;
    };
}

return	found;
}