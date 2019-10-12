#include <iostream>
using namespace std;

float sqaureroot(int n,int p){

    //finding integral part by binary search
    int s=0;
    int e=n;
    int mid;
    float ans;
    int a[n+1];
    for(int i=0;i<n+1;i++){
        a[i] = i;
    }

    while(s<=e){
        mid = (s+e)/2;
        if(a[mid]*a[mid] == n){
            ans = a[mid];
            break;
        }

        else if(a[mid]*a[mid] < n){
            ans = a[mid];
            s=mid+1;
        }

        else{
            e = mid -1;
        }
    }
    
    //Finding fraction part
    float increment = 0.1;

    for(int i=0;i<p;i++){
        while(ans*ans <= n){
             ans += increment;
        }
        
         ans -= increment;
        
         increment /= 10;
    }

    return ans;

   
}

int main() {
    int n = 98;
    int p=3;
    float sqroot = sqaureroot(n,p);
    cout << sqroot;
    return 0;
}
