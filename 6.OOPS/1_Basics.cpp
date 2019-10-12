#include<iostream>
using namespace std;

class Car{
    int price;
    int model;
    char name[20];
};

int main(){

    //instance of CAR object
    Car A;
    cout << sizeof(A) << endl;
    return 0;
}