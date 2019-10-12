//this code prints just first occurence 

#include<iostream>
using namespace std;

int binary(int a[],int n,int key){
    int s=0;
    int e=n-1;
    if(s>e){
        return -1;
    }


   

    
}

int main(){
    int n=6;
    int a[n] = {5,6,6,7,8,9,0};
    int key = 6;
    int ans = binary(a,n,key);
    cout << ans;
    return 0;
}