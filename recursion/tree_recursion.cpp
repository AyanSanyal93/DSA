#include <iostream>
using namespace std;

void function(int n)
{
    if (n > 0)
    {
        //To decode check f(n) = f(n-1) , print(n) , f(n-1) , example f(3) = f(2) , print(3) , f(2)
        // cout << "print :: " << n << endl; // 3 2 1 1 2 1 1
        function(n - 1);
        cout << "print :: " << n << endl; // 1 2 1 3 1 2 1
        function(n - 1);
        // cout << "print :: " << n << endl; // 1 1 2 1 1 2 3
    }
}

int main()
{
    int x = 3;
    function(x);
    return 0;
}
