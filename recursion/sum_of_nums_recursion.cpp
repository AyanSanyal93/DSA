#include <iostream>
using namespace std;

int function(int n)
{
    if (n > 0)
    {
        int sum = function(n - 1) + n;
        return sum;
    }
    return 0;
}

int main()
{
    int x = 5;
    int r = 0;
    r = function(x);
    cout << "Result: " << r << endl;
    return 0;
}
