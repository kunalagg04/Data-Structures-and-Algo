//pointer is a variable which holds address of variable
#include<iostream>
using namespace std;



int main() {
    int x = 1;
    int* xptr = &x;
    cout << xptr << endl;
    cout << &x << endl;
    cout << *xptr << endl;
    cout << *xptr + 1 << endl;
    cout << *(xptr + 1) << endl;
    
    cout << *(&xptr) << endl;

    cout << "error " << &xptr << endl;

    int** xptrptr = &(xptr);
    cout << xptrptr << endl;
    return 0;


}