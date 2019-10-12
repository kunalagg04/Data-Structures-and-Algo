#include<iostream>
using namespace std;

void increasing(int a){

    if(a==1){
        cout << a;
    }

    else{
          increasing(a-1);
          cout << a;
    }
  
}

int main(){
    int a = 5;
    increasing(a);
    
    return 0;
}