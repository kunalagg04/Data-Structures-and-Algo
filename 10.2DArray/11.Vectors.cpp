//vectors are ds of stl
//dynamic allocation
//resizable array
#include <iostream>
#include<vector>
using namespace std;
int main() {
   //declaring v object of vector class
   vector<int> v;
   int n;
   cin >> n;

   //reserve will reserve 100 elem space
   v.reserve(100);

   //inputting vector elems.
   for(int i=0; i<n ; i++){
       int temp;
       cin >> temp;
       v.push_back(temp);
   }

   //removes last elem
   v.pop_back();
    for(int i=0; i< v.size() ; i++){
       cout << v[i] << " ";
   }


   //v.erase
   //v.clear() clears the vetor
   //v.capacity() tells maximum size of vector

   //sorting
   // we can also make custom comparator
   v.sort(v.start(),v.end());
   return 0;
}
