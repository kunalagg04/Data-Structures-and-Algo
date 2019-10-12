#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main(){
    int a[] = {1,2,4,2,4,5};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++){
        cout << a[i];
    }


    string b[] = {"Kunal","Ok","chutiya oppo"};
    sort(b,b+4);
    for(int i = 0 ; i < 4 ; i++){
        cout << b[i];
    }
    return 0;
}