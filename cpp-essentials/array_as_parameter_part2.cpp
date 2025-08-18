#include <iostream>

using namespace std;

int *array_generator(int size)
{
    int *p = new int[size]; // Heap memory assigned to a pointer which is essentially an array
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p; // Pointer/Array returned as return type is *
}
int main()
{
    int array_size = 5;
    int *ptr = array_generator(array_size); // returned pointer assigned to pointer variable in main()
    for (int i = 0; i < array_size; i++)
    {
        ptr[i] = i + 1;
        cout << "Array iteration inside sub function :: " << ptr[i] << endl;
    }
}