#include <iostream>
#include <string>

using namespace std;

struct rectangle {
    int length;
    int breadth;
    };

struct student {
    string name;
    string department;
    int id;
};

int main() 
{
    rectangle r = {10,40};
    cout << "Area of Rectangle is :: " << r.length * r.breadth << endl;
    student s;
    s.name = "Ayan";
    s.department = "Computer Science";
    s.id = 913186;
    cout << "Student details is :: " << s.name << ", " << s.department << ", " << s.id << endl;
}