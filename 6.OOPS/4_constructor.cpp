//Every class comes with four default methods:
//1.Constructor
//2.Copy Constructor
//3.Copy Assignment Constructor
//4.Destructor

//Constructor job:
//1.Called automatically and firstly whenever an obj. is being created
//2.Consructor name same as class name
//3.Does all the allocation job

//Parameterised Constructor:
//Allows to pass certain parameters which will used.
//There can be both normal and parameterised constructor and accordingly one of them is called.
//If while creating object we pass args , then then parameterised constructor is called else normal is called.

#include<iostream>
#include <cstring>
using namespace std;


class Car{

    private:
     int price;
    
    //access modifier -- public
    public:
   
    int model;
    char name[20];

    //Constructor
    //exists by default but we are now overriding it . Now what we write will be called.
    Car(){
        //overriding default constructor
        //cout << "making";
    }

    //parameterised constructor
    Car(int p,int m,char *n){
        cout << "making" << endl;
        price =p;
        model =m;
        strcpy(name,n);
    }

    //this is a copy constructor . Ye already hogta h . It works the way shown below . U need not write this code.
    //&X is used becasue here we pass a copy of a object which we want to copy .
    // But making copy needs copy constructor
    // & if we pass copy in copy constructor and copy constructor needs copy to make a copy then code ki gaand fat ke hath mai aajayegi !
    // Hence we pass the pointer .
    Car(Car &X){
       price = X.price + 1;
       model = X.model;
    
    }

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
    cout << A.getter() << endl ;

    Car B(200,2012,"BMW");
    cout << B.getter() << endl;

    Car C(B);
    cout << C.getter() << endl;
    
    
     

    return 0;
}