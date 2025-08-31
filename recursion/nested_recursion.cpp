#include <iostream>
using namespace std;

/*
* This is called nested recursion as recursive function is called within another recursive function.
* Time complexity is T(n)
* Space complexity is O(n) due to call stack
* Alternate way to achieve same result is by using
* decrementing loop with O(1) space complexity.
* Print the current value of n then call the function with n - 1 ,
* hence descending as execution starts at 5
* f(95) -> f(f(106)) -> f(96) -> f(f(107)) -> f(97) -> f(f(108)) -> f(98) -> f(f(109)) -> f(99) -> f(f(110)) -> f(100) -> 90 and so on
*/

int function(int n)
{
    if (n > 100)
    {
        return (n - 10);
    }
    else
        return function(function(n + 11));
}

int main()
{
    int x = 95;
    cout << function(x);
    return 0;
}
