#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int a[5] = {-3,4,5,3,-2};
    int cs=0;
    int ms=0;
    for(int i = 0 ; i < 5; i++){
        cs= cs+ a[i];
        if(cs < 0){
            cs=0;
        }
        ms=max(ms,cs);

    }
    cout << ms;
    return 0;
}
