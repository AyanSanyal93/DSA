#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(&a,&b);
    cout << ":: Parameter pass by Address :: " << endl;
    cout << "First number :: " << a << endl;
    cout << "Second number :: " << b << endl;
}