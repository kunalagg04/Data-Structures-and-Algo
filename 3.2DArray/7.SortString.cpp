
#include <iostream>
#include <cstring>
#include<string.h>
#include <algorithm>
using namespace std;

bool compare(string s1 , string s2){
return s1 > s2;
}


int main(){

    string s[]={"Kunal" , "Jhha" , "ncdni"};


    sort(s,s+3);
    for(int i = 0 ; i < 3 ; i++){
        cout << s[i] << endl;
    }

    //the third argument tells how to sort the strings . Similarly it can be done in integer array
    sort(s,s+3,compare);
    for(int i = 0 ; i < 3 ; i++){
        cout << s[i] << endl;
    }

    return 0;
}
