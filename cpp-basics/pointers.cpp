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
#include <iostream>

using namespace std;

main() {
    int a= 10;
    int *p1;
    p1 = &a;
    cout << "int variable :: " << a << endl;
    cout << "pointer variable value :: " << *p1 << endl;
    cout << "pointer variable refernce :: " << p1 << endl;
}