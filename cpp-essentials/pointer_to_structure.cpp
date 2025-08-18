#include <iostream>
#include <string>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    rectangle r1 = {10, 40};
    rectangle *p1 = &r1;
    rectangle *p2 = new rectangle;
    rectangle *p3 = (rectangle *)malloc(sizeof(rectangle));

    p2->length = 20;
    p2->breadth = 30;
    p3->length = 100;
    p3->breadth = 400;

    cout << "Pointer p1 of length to Rectangle is :: " << p1->length << endl;
    cout << "Pointer p1 of breadth to Rectangle is :: " << p1->breadth << endl;

    cout << "Pointer p2 of length to Rectangle is :: " << p2->length << endl;
    cout << "Pointer p2 of breadth to Rectangle is :: " << p2->breadth << endl;

    cout << "Pointer p3 of length to Rectangle is :: " << p3->length << endl;
    cout << "Pointer p3 of breadth to Rectangle is :: " << p3->breadth << endl;

    cout << "Pointer p3(address) of length to Rectangle is :: " << &(p3->length) << endl;
    cout << "Pointer p3(address) of breadth to Rectangle is :: " << &(p3->breadth) << endl;
}