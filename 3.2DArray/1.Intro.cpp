#include <iostream>
using namespace std;
int main() {

    //char c[] = {'c','b'};
    // use null at the end because here size is not defined hece there may be garbage value . Vout will stop at null hence use null
    char c[] = {'c','b','\0'};
    cout << c << endl;
    cout << sizeof(c) << endl;
   
    char a[5] = {'c','b'};
    cout << a << endl;
    cout << sizeof(a) << endl;


    char b[] = "Hello";
    //we can print out a char array directly without using for loop
    cout << b << endl;
    //note that size is 6 not 5 becuase "" automatically adds null character
    cout << sizeof(b) << endl;

    //input char array
    

    char e[100];
	cin >> e;
	cout << e << endl;
	
	//this works for string without space bar. eg: fails for "Hi There"
	//hence we ned to use cin.getline

	char d[100];
	//cin.getline(array_name .max_size , delimiter (\n by default))
	cin.getline(d, 100);
	cout << d << endl;
    
    return 0;
}
