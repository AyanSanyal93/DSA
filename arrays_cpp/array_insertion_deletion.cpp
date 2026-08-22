/*
 * Array Deep dive and operations on arrays
 */
#include <iostream>
using namespace std;

int main()
{
    // Define an array of dynamic user input size
    int n;
    cout << "Enter size of array:\t";
    cin >> n;

    int* arr1 = new int[n]{}; // {} zero-initializes all elements, like [0]*n
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;

    // Iterate and input elements of an array from the user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter each array element:\t";
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;

    delete[] arr1; // done with arr1, free before moving on

    // Insert element in an array at given index

    int arr2[6] = {1, 2, 3, 4, 5, 0}; // manually adding an empty slot, like arr2.append(None)
    int size2 = 6;

    int insert_index;
    cout << "Enter index where element to be inserted:\t";
    cin >> insert_index;

    int insert_element;
    cout << "Enter element to be inserted:\t";
    cin >> insert_element;

    for (int i = size2 - 1; i > insert_index; i--) // size2-1 to accommodate the manually added slot
        arr2[i] = arr2[i - 1];
    arr2[insert_index] = insert_element;

    for (int i = 0; i < size2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    // Delete element from an array at given index

    int arr3[5] = {1, 2, 3, 4, 5};
    int size3 = 5;

    int deletion_index;
    cout << "Enter index from where element to be deleted:\t";
    cin >> deletion_index;

    for (int i = deletion_index; i < size3 - 1; i++) // size3-1 to accommodate length-to-index conversion
        arr3[i] = arr3[i + 1];
    size3--; // equivalent of arr2.pop() — shrink logical size by one

    for (int i = 0; i < size3; i++)
        cout << arr3[i] << " ";
    cout << endl;

    return 0;
}