/*
Christopher Cedeno Lab 12
Problem: A palindrome is a string that reads the same both forward and backward. 
For example, the string “madam” is a palindrome. 
Write a program that uses a recursive function 
to check whether a string is a palindrome. 
Your program must contain a value-returning recursive function 
that returns true if the string is a palindrome and false otherwise. 
Do not use any global variables, use the appropriate parameters.
Submission instructions:
• Due date is May/01st @ 11:59pm.
• Submit your source code via Blackboard only.
• Check rubric.

*/

#include <iostream>
#include <string>
using namespace std;

bool checkPal(string, int, int);

int main()
{

    string *word, *upperWord;
    bool isPal = false;

    cout << "Input word to check if palidrome: " << endl;
    word = new string;
    upperWord = new string;
    cin >> *word;

    /*
    Assigns word to upperword to be transformed into all upper 
    so regradless of cpaitilaztion the check for
    Palidrome will be accurate and the can still 
    show the user the word the same format they typed it in
    */
    *upperWord = *word;
    // cout << *word << "line 34"<< endl;
    transform(upperWord->begin(), upperWord->end(), upperWord->begin(), ::toupper); // < -- copy pasted from stack overflow >_<'
    // cout << *word << "line 36"<< endl;

    // cout << word->length() << endl;
    // isPal = checkPal(*word, 0, word->length());
    isPal = checkPal(*upperWord, 0, word->length() - 1);

    if (isPal)
        cout << "The word : " << *word << " : is a palidrome" << endl;
    else
        cout << "The word : " << *word << " : is NOT a palidrome" << endl;

    delete word;
    delete upperWord;
}

bool checkPal(string word, int first, int last)
{

    // cout << word[first] << ": " << first<< endl;
    // cout << word[last] << ": " << last<< endl;

    if (first >= last) //if first is >= to last it made it in through the whole string as true therefore is a Palidrome
        return true;
    else if (word[first] != word[last]) //if the charecter dont match then the charecters on the opposing sides of the string dont match therfore not a palidrome
        return false;

    //if you havnt moved in through the string to be pass the middle of it and
    //the charecters still match move in one charecter from the left and one charecter from the left

    // return checkPal(word, first++, last--);
    return checkPal(word, ++first, --last);
};
