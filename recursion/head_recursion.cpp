#include <iostream>
using namespace std;

void function(int n)
{
    if (n > 0)
    {
        /*  This is called head recursion as recursive function is called in the beginning
            of all other tasks.
            Head recursion functions all tasks are done at returning time
            Time complexity is T(n)
            Space complexity is O(n) due to call stack
            call the function with n - 1 till f(0) is reached
            then print the current value of n which will inner most f(1)
            hence ascending as execution starts at 5
        */
        function(n - 1);
        cout << "print :: " << n << endl; // 1 2 3 4 5
    }
}

int main()
{
    int x = 5;
    function(x);
    return 0;
}
