#include<iostream>

using namespace std;

char spellings[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void func(int a){

    if(a==0){
        return;
    }
    int b,r;
    r=a%10;
    a=a/10; 
    func(a);
    cout << spellings[r] << " ";


}

int main(){
    func(2048);
    return 1;
}