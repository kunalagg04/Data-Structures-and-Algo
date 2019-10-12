#include <iostream>
using namespace std;

int main() 
{
    string a = "okocfvk okok";
    cout << a.length() << endl;

    //edit the string
    a[0] = 'd';
    cout << a[0] << endl;

    //searches for given substring
    cout << a.find("okok") << endl;

    // starts looking for okok after index 4
    cout << a.find("okok" , 4) << endl;

    //to take a part of string , 8 is starting index , 3 is lenght of substr
    cout << a.substr(8, 3) << endl;
    return 0;
}