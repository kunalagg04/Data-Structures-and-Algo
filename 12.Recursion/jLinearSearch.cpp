//this code prints just first occurence 

#include<iostream>
using namespace std;

int linear(int a[],int n,int key){
    
    if(n==1){
        if(a[0] == key){
            return 0;
        }
        else{
            return -1;
        }
    }

  int b = linear(a,n-1,key);
//cout << b << endl;

    if( b == -1 && a[n-1] == key ){
        return n-1;
    }
    else{
        return b;
    }


    return -1;

    
}

int main(){
    int n=6;
    int a[n] = {5,6,6,6,7,8,9,0};
    int key = 6;
    int ans = linear(a,n,key);
    cout << ans;
    return 0;
}