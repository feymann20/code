#include <iostream>
using namespace std;
int main(){
    int c,C,X,v,V;
    cin>>c>>C>>X;
    v=c**3;
    V=C**3;
    if (X*v<V)
    {
        cout<<"!Eh possivel"<<endl;
    }
    else{
        cout<<"Eh possivel"<<endl;
    }
}