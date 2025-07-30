/* Why pointers are needed ?
As a main memory has 3 sections - code section , stack , heap
Program can access code & stack sections but cannot access heap dorectly
To access the heap memory from code section pointers are used.
Pointers are used to :
1.Accessing Heap memory
2.Accessing resources like files
3.Passing parameters
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{
    int a = 10;
    int *p1;
    p1 = &a;
    cout << "int variable :: " << a << endl;
    cout << "pointer variable value :: " << *p1 << endl;
    cout << "pointer variable refernce :: " << p1 << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    /*
    Since arr[] contains the address of the first element of Array arr,
    There is no need for "&" while initializing pointer p2
    */
    int *p2 = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "Array iteration through array var :: " << arr[i] << endl;
        cout << "Array iteration through pointer var :: " << p2[i] << endl;
    }

    // Assigning memory in heap for a list/array of size 5
    int *p3 = (int *)malloc(5 * sizeof(int)); // C lang syntax
    int *p4 = new int[5]; // C++ lang syntax
    cout << "Enter values for array p3 in heap memory";
    for (int i = 0; i < 5; i++)
    {
        cin >> p3[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Array iteration through heap pointer var p3 :: " << p3[i] << endl;
    }

    cout << "Enter values for array p4 in heap memory";
    for (int i = 0; i < 5; i++)
    {
        cin >> p4[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Array iteration through heap pointer var p4 :: " << p4[i] << endl;
    }
    free(p3); // Memory de-allocation in heap for p3 pointer created through C lang.
    delete []p4; // Memory de-allocation in heap for p4 pointer created through C++.

    /*
    Interesting observation about pointers is :
    All pointers take same amount of space in memory which is 8 bytes in modern compilers
    */
    int *intpointer;
    float *floatpointer;
    double *doublepointer;
    char *charpointer;
    string *stringpointer;
    cout << "Size of intpointer :: " << sizeof(intpointer) << endl;
    cout << "Size of floatpointer :: " << sizeof(floatpointer) << endl;
    cout << "Size of doublepointer :: " << sizeof(doublepointer) << endl;
    cout << "Size of charpointer :: " << sizeof(charpointer) << endl;
    cout << "Size of stringpointer :: " << sizeof(stringpointer) << endl;

    return 0;
}