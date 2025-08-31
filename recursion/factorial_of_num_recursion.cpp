#include <iostream>
using namespace std;

int factorial = 1;

void factorial_of_num(int n)
{
    if (n == 0)
        return;
    else if (n > 0)
    {
        factorial = factorial * n;
        factorial_of_num(n - 1);
    }
}

int main()
{
    int x = 5;
    factorial_of_num(x);
    cout << factorial;
    return 0;
}
