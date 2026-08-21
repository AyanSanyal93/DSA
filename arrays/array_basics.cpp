#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int array[5] = {1,2,3,4,5};
    cout << "------------------" << endl;
    for(int i=0;i<5;i++){
        cout << array[i] << endl;
        cout << &array[i] << endl;
    }
    cout << "------------------" << endl;
    int *p;
    p = new int[5];
    for(int i=0;i<5;i++){
        cout << p[i] << endl;
        cout << &p[i] << endl;
    }
    cout << "------------------" << endl;
    delete []p;
}