#include<iostream>
using namespace std;


int main() {
    int left,right, n = 5;
    int sum = -9000;
    int arr[5] = {1,-2,3,4,5};
    for (int i = 0 ; i < n ; i ++ ){
        for (int j = i ; j < n ; j++){

            //prints out elem of current subarray
            int s = 0;
            for ( int k = i ; k <= j ; k++){
                s += arr[k];
            }
         

            if (s > sum ){
                sum = s;
                left = i;
                right = j;
            }

            
        }
    }
    cout << sum;
       cout << endl;
            for(int x = left ; x <= right ; x++){
                cout << arr[x];
            }
    return 0;
}