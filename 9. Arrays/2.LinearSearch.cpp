#include<iostream>
using namespace std;


int main() {
   int n = 5 ;
  
   int arr[5] = {0,1,2,3,4};
   int key = 4;
   int i;


   for (i = 0 ; i < 5;i++ ){
        if (key == arr[i]){
            cout << "Key found at " << i << endl;
            break;
        }
   }

   if(i==n){
       cout << "key not found" ;
   }
    return 0;
}