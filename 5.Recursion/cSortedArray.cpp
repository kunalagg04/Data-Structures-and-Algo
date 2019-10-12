#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    if(n==1){
        return true;
    }

    if(sorted(a,n-1) && a[n-1]>=a[n-2]){
      return true;
    }
    else{
        return false;
    } 
}

int main(){
    int a[5] = {1,2,4,5,9};
    bool ans = sorted(a,5);
    if(ans){
        cout << "True";
    }
    else{
        cout << "False";

    }
    
    return 0;
}