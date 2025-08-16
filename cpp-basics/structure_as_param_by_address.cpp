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
void structpassvalue(rectangle *r1)
{
    r1->breadth = 50;
    cout << "inside structfunction :: " << r1->length << "," << r1->breadth << endl;
}

void structpassaddress(rectangle r1)
{
    r1.breadth = 50;
    cout << "inside structfunction :: " << r1.length << "," << r1.breadth << endl;
}

int main()
{
    rectangle r = {10, 40};
    structpassvalue(&r);
    cout << "inside main :: " << r.length << "," << r.breadth << endl;
}
*/