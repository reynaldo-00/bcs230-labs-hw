#include <iostream>
using namespace std;

int compare(int factor, int &num, int &preFactor)
{
    num += factor;
    if (preFactor < factor)
    {
        num -= 2 + preFactor;
    }
    preFactor = factor;
}

int main()
{
    string str;
    int num = 0, factor = 0, preFactor = 0;
    cout << "Enter a Roman Numeral: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case 'I':
            compare(1, num, preFactor);
            break;
        case 'V':
            compare(5, num, preFactor);
            break;
        case 'X':
            compare(10, num, preFactor);
            break;
        case 'L':
            compare(50, num, preFactor);
            break;
        case 'C':
            compare(100, num, preFactor);
            break;
        case 'D':
            compare(500, num, preFactor);
            break;
        case 'M':
            compare(1000, num, preFactor);
            break;
        }
    }
}
