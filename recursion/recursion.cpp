#include <iostream>
using namespace std;

void function(int n)
{
    if (n > 0)
    {
        /*  Print the current value of n then call the function with n - 1 ,
            hence descending as execution starts at 5
        */
        // cout << "print :: " << n << endl;
        function(n - 1);
        /*  call the function with n - 1 until program control reaches function(n = 0)
            then start printing the current value of n - 1 ,
            hence ascending as execution starts at 1 from top of stack
        */
        cout << "print :: " << n << endl;
    }
}

int main()
{
    int x = 5;
    function(x);
    return 0;
}
