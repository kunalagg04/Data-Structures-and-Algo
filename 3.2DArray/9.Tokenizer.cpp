#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	char str[] = "a string delimitizer";
	char *ptr;

	ptr = strtok(str , " ");


	while(ptr != NULL){ //NULL SIGNIFIES THAT STRTKR NEEDS TO EXTRACT WORD FROM ORIGINAL STRING
        cout << ptr << endl;
        ptr = strtok(NULL , " ");
	}

	return 0;
}
