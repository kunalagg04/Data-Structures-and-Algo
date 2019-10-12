#include <iostream>
//using namespace std;

int main() 
{
  
    int age;
    string name;

    cout << "enter your age" << endl;
    cin >> age;
    cout << "you are" << age << "yo" << endl;

    //to input a string
    cout << "input your name" << endl;
    getline(cin , name);
    cout << "Your name is" << name << endl;


    return 0;
}