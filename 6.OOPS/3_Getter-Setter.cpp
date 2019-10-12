#include<iostream>
using namespace std;

//getter is s func which returns value of an attribute 
//setter does it's opposite.
//Need :
//Suppose u want user to input price of car and he inputs negative value then it is wrong , thus by using setter u can put constraints.
//Suppose u want to print an attribute but attribute is private , then getter will help.


class Car{

    private:
     int price;
    
    //access modifier -- public
    public:
   
    int model;
    char name[20];

    void start(){
        cout << "ZOOOOOOOOOOOOOOON  " << name << endl;
    }

    void setter(int p){
        price = p;
    }

    int getter(){
        return price;
    }


};

int main(){

    //instance of CAR object
    Car A;
  
    A.start();
    A.setter(2000);
    cout << A.getter();
    
    return 0;
}