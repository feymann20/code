#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4,n5,n;
    cin>>n1>>n2>>n3>>n4>>n5;
    n=n1+n2+n3+n4+n5;
    if (n >5000)
    {
        cout<< "Acesso proibido"<<endl;
    }
    else{
        cout <<"Acesso Liberado"<<endl;
    }
}