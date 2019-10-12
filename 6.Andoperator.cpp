#include<iostream>
using namespace std;



int main() {
    int a = 10;
    cout << &a << endl;

    //& doesn't work in case of character due to operator overloading.
    char ch = 'A';
    cout << &ch << endl;

    //to solve this problem we typecast char* to void* 
    //now cout doesnt know what kind of input is given, hence prints out the answer
    cout << (void*)&ch << endl;
    return 0;
}