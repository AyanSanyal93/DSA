#include <iostream>
#include <string>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

// Uncomment to see call by pointer address in action
// In this case a new structure is created & this is an example of call by address

/*
void structpassaddress(rectangle *r1)
{
    r1->breadth = 50;
    cout << "inside structfunction :: " << r1->length << "," << r1->breadth << endl;
}

int main()
{
    rectangle r = {10, 40};
    structpassaddress(&r);
    cout << "inside main :: " << r.length << "," << r.breadth << endl;
}
*/

// Uncomment to see call by pointer of type rectangle created in heap
rectangle *structpassaddressinheap()
{
    rectangle *p;
    p = new rectangle;
    p->length = 50;
    p->breadth = 20;
    return p;
}
int main()
{
    rectangle *ptr;
    ptr = structpassaddressinheap();
    cout << "inside main :: " << ptr->length << "," << ptr->breadth << endl;
}