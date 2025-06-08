#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
 vector<int> v;

 cin>>v[1]>>v[2]>>v[3];
 // iterator é um ponteiro para elementos
 for(vector<int>::iterator it = v.begin();     it != v.end();    it++) 
      cout << *it << endl; // não imprima o iterator, e sim o valor apontado por ele!
}
