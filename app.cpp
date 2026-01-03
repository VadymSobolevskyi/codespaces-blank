#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
 //   cout.setf(cout.boolalpha);
    int nArg1;
    cout << "Value 1: ";
    cin >> nArg1;

    int nArg2;
    cout << "Value 2: ";
    cin >> nArg2;

    bool b;
    b = nArg1 == nArg2;

    cout << "Statement, " << nArg1
        << " equals to " << nArg2
        << " is " << b
        << endl;

    system("PAUSE");
    return 0;
}
