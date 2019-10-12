#include<iostream>
using namespace std;

void decreasing(int a){

    if(a==0){
        return;
    }   
          cout << a;
          decreasing(a-1);
    
  
}

int main(){
    int a = 5;
    decreasing(a);
    
    return 0;
}