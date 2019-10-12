#include<iostream>
using namespace std;

int multiply(int a,int b){
    if(b==1){
        return a;
    }



    return a + multiply(a,b-1);
   
}

int main(){
    int a,b;
    a=5;
    b=4;
    int ans = multiply(a,b);
    cout << ans;
}