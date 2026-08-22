#include <iostream>
using namespace std;

void function(int n)
{
    if (n > 0)
    {
        /*  This is called tail recursion as recursive function is called in the end after
            all other tasks are completed.
            Tail recursion functions all tasks are done at function calling time
            Time complexity is T(n)
            Space complexity is O(n) due to call stack
            Alternate way to achieve same result is by using
            decrementing loop with O(1) space complexity.
            Print the current value of n then call the function with n - 1 ,
            hence descending as execution starts at 5
        */
        cout << "print :: " << n << endl; // 5 4 3 2 1
        function(n - 1);
    }
}

int main()
{
    int x = 5;
    function(x);
    return 0;
}
