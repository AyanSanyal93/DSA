#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Prints each element of the vector along with its memory address
void display_array(vector<int> vector_array)
{
    for (int i = 0; i < 5; i++)               // NOTE: hardcoded to 5 — will break/crash if vector has fewer than 5 elements, or skip elements if it has more
    {
        cout << vector_array[i] << endl;       // Print the value at index i
        cout << &vector_array[i] << endl;      // Print the memory address of that element using the address-of operator
    }
}

// Performs binary search on a sorted vector, returns index of search_element or -1 if not found
int binary_search(vector<int> vector_array, int search_element)
{
    int mid = 0;                                // Will hold the middle index at each step
    int low = 0;                                 // Left boundary of the current search range
    int high = vector_array.size() - 1;          // Right boundary of the current search range (last valid index)

    while (low < high)                           // NOTE: should be low <= high — with strict <, loop can end one step early and miss the final candidate when low == high
    {
        mid = (low + high) / 2;                  // Compute midpoint of current range (overflow-safe form would be low + (high-low)/2, but fine for small arrays)

        if (search_element == vector_array[mid]) // Check if the middle element is the target
        {
            return mid;                          // Found — return its index immediately
        }
        else if (search_element < vector_array[mid]) // Target is smaller than mid element
        {
            high = mid - 1;                      // Discard right half — search only the left half next
        }
        else if (search_element > vector_array[mid]) // Target is larger than mid element
        {
            low = mid + 1;                       // Discard left half — search only the right half next
        }
    }
    return -1;                                   // Loop ended without finding target — element not present
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};           // Sorted vector to search within — binary search requires sorted input

    cout << v.size() << endl;                     // Print the number of elements in the vector (6)

    cout << binary_search(v, 3);                   // Search for value 3, print the returned index (or -1 if not found)

    return 0;                                       // Indicate successful program termination