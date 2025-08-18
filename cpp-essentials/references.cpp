/*
Referene is a alias or a nickname given to a variable
Used mainly for parameter passing to functions
and sometimes used in small functions instead to pointers
*/

#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
    int a = 10;
    int &r = a;
    cout << "Original variable :: " << a << endl;
    cout << "Reference variable :: " << r << endl;
    r = 25;
    cout << "Original variable after value change :: " << a << endl;
    cout << "Reference variable  after value change :: " << r << endl;
}