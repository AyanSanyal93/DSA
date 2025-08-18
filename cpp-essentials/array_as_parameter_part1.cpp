#include <iostream>

using namespace std;

void function(int A[],int n)
// void function(int *A,int n) // This syntax also works since Arrays are pointers too
{
    /*
    Below line will print 2 because size of pointer is 8 bytes and size of int is 4 bytes
    hence 8/4 = 2 , as array passed as parameter to a function is just
    a pointer to the main function array
    */
    cout << "Array size inside function :: " << sizeof(A) / sizeof(int) << endl;
    A[0] = 100; // This change will reflect in the actual array in main() as Arrays are pointers
    for (int j=0;j<n;j++)
    {
        cout << "Array iteration inside sub function :: " << A[j] << endl;
    }
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    int array_size = 5;
    cout << "Array size inside main function :: " << sizeof(A) / sizeof(int) << endl;
    function(A,array_size);
    for (int i : A)
    {
        cout << "Array iteration inside main function :: " << i << endl;
    }
}