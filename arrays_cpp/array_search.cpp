// Searching techiniques in arrays
// Worst case -> O(n)
// Best case -> O(1)
// Average case -> (1 + 2 + 3 + ... + n) / n
//                 = [n(n+1)/2] / n
//                 = (n+1)/2
//                 ~ O(n)
#include <iostream>   // Provides cin/cout for input and output
using namespace std;  // Allows using cin, cout, endl without std:: prefix

// Function to swap two integers by reference (via pointers)
void swap(int *x,int *y){
    int temp = *x;   // Store the value pointed to by x in a temporary variable
    *x = *y;         // Overwrite the value at address x with the value at address y
    *y = temp;        // Overwrite the value at address y with the original x value
}

// Linear search function: scans array left to right looking for target
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)              // Loop through every index from 0 to size-1
    {
        if (arr[i] == target){                    // Check if current element matches target
            swap(&arr[i],&arr[0]);                  // NOTE: passes addresses — will compile, but since swap already might have happened so find index wont work anymore
            return i;                             // NOTE: not inside the if{} block — this runs unconditionally on every iteration
        }
    }
    return -1;   // Reached only if loop completes without an early return (target not found)
}

int main()
{
    int size = 11;                                                          // Number of elements to allocate and search through
    int* array = new int[size]{10, 20, 80, 50, 40, 70, 12, 23, 45, 67, 89};  // Heap-allocate array and initialize with values

    int target;                                    // Variable to hold the value the user wants to search for
    cout << "Enter element to search: ";           // Prompt the user
    cin >> target;                                  // Read the target value from user input

    int result = linearSearch(array, size, target); // Call linear search, store returned index (or -1)

    if (result != -1)                                          // Check whether the element was found
        cout << "Found at index: " << result << endl;          // Print the index if found
    else
        cout << target << " not found in array" << endl;       // Print not-found message otherwise

    for(int i=0;i<size;i++){
        cout << array[i] << endl;
    }
    delete[] array;  // free heap memory — this is manual now, no automatic cleanup
    return 0;        // Indicate successful program termination to the OS
}