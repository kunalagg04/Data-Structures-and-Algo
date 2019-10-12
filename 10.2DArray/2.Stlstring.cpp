// HELLO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s = "Hi Bi"; 
	cout << s << endl;
    cout << s.length() << endl;

	string g;
	getline(cin, g);
	cout << g << endl;

    //array of strings
	string c[] = { "Hi","BC" };
    for ( int i = 0 ; i  <  2;i++){
        cout << c[i] << endl;
    }



	char a[10][100] = {"kunal","Boi"};
    cout << a[0] << endl;

    char b[10][100];
    for(int i = 0 ; i < 10 ; i++){
        cin.getline(b[i],100);
    }


    for(int i = 0 ; i < 10 ; i++){
        cout << a[i] << " " << endl;
    }

	
	

	return 0;

}


