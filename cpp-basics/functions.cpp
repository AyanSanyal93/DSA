#include <iostream>

using namespace std;

int add(int a, int b) // Formal parameters are the ones which are function args & are temporary
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int z = 0;
    z = add(2, 3); // Actual parameters are ones which get passed from function caller
    cout << "Sum is :: " << z;
}