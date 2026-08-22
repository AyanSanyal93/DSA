#include <iostream>
using namespace std;

int sum = 0;

// void sum_of_natural_numbers(int n)
// {
//     if(n == 0)
//         return;
//     else if (n > 0)
//     {
//         sum = sum + n;
//         sum_of_natural_numbers(n - 1);
//     }
// }

int sum_of_natural_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n > 0)
    {
        return sum_of_natural_numbers(n - 1) + n;
    }
}

int main()
{
    int x = 100;
    cout << sum_of_natural_numbers(x);
    return 0;
}
