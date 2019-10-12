#include<iostream>
using namespace std;

class Car{

    //access modifier -- public
  public:
    int price;
    int model;
    char name[20];

    void start(){
        cout << "ZOOOOOOOOOOOOOOON  " << name;
    }
};

int main(){

    //instance of CAR object
    Car A;
    A.price = 200;
    A.model = 2016;
    A.name[0] = 'B';
    A.name[1] = 'C';
    A.name[2] = '\0';
    A.start();
    
    return 0;
}