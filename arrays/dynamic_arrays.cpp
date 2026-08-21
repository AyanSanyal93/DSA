#include <iostream>
using namespace std;

int main(){
    // Step 1: Create a pointer `p` and allocate memory for 5 integers.
    // new int[5]{1,2,3,4,5} allocates an array of 5 ints and initializes it to:
    // 1, 2, 3, 4, 5.
    int *p;
    p = new int[5]{1,2,3,4,5};

    // Step 2: Create another pointer `q` and allocate memory for 10 integers.
    // This bigger array will hold the old values from `p` plus extra space.
    int *q;
    q = new int[10];

    // Step 3: Copy the first 5 elements from `p` into `q`.
    // This is a simple way to resize/copy dynamically allocated data.
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

    // Step 4: Free the original array before reassigning `p`.
    delete []p;

    // Reassign `p` to point to `q`.
    p=q;
    q=NULL;

    // Step 5: Print all 10 elements of the array that `p` now points to.
    // Only the first 5 elements were initialized; the remaining 5 are uninitialized.
    for(int i=0;i<10;i++){
        cout << p[i] << endl;   // Print the value at index i.
        cout << &p[i] << endl;  // Print the address of each element in the array.
    }

    // Step 6: Print a separator just before ending the program.
    cout << "------------------" << endl;

    // Step 7: Free the larger array.
    delete []p;
}