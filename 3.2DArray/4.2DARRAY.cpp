#include <iostream>
using namespace std;
int main() {
    //58:00 WEBINAR - 2D ARRAYS
    // a[0] points to 1 st row but it will return alll elem becuase we know cout stops at null or garbage value but here after a row finishes , anothe rrow starts but mo garbage just FOR CHAR ARRAY .
    //FOR INTEGER ARRAY U NEED TO GIVE EXACT ADDRESS TO CCESS AN ELEM

    int a[][3] = {{1,2,3},{4,5,6}};
    cout << a << endl;
    cout << a[0] << endl;
    cout << a[0][1] << endl;

    char d[][3] = {{'a','b','c'},{'d','f','w'}};
    cout << d[0] << endl;   

    char b[][4] = {{'a','b','c','\0'},{'d','f','w','\0'}};
    cout << b[0] << endl;   

     //another way to create list of string
    //recommended way
    char words[10][100] = {
        "Apple","Nnana","Olala"
    };
    //here apple is a string hence auto terminated by a null . Thus words[0] will print apple only
    cout << words[0] << endl;
    cout << words[1] << endl;

    

    cout<<"Hello World!";
}
