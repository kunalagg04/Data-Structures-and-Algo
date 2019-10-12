#include<iostream>
using namespace std;

int main() {
    int num[5] = {2,3,4,5};
    num[0] =4;
    cout << num << endl;
    cout << &num << endl;
    cout << &num[0] << endl;
    cout << &num[1] << endl;
    cout << &num[2] << endl;
    for ( int i = 0 ; i <= 4 ; i ++) {
        cin >> num[i] ;
        cout << num[i] << endl;
    }



    return 0;
}