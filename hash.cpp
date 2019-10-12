#include <iostream> 
using namespace std; 
  
void countingSort(int a[], int n)  
{  
    int freq[1000];
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
       
 
    int j=0;
     for(int i=0;i<1000;i++){
        while(freq[i] > 0){
            a[j]=i;
            j++;
            freq[i]--; 
        }
    }
   
}  
  

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
        cin >> a[i];
    }

    countingSort(a,n);

     for(int i =0;i<n;i++){
        cout << a[i] << endl;
    }

    

	return 0;
}