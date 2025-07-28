#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout << "Array Size :: ";
    int n = sizeof(a) / sizeof(a[0]);
    cout << sizeof(a) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array elements :: ";
        cin >> a[i];
    }


    cout << "Array content :: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != 4)
        {
            cout << ",";
        }
    }
    return 0;
}
