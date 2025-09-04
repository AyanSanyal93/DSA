#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
    {
        return power(m, n - 1) * m;
    }
}

int main()
{
    int m = 5;
    int n = 4;
    cout << power(m, n) << endl;
    return 0;
}
