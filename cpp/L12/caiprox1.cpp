#include <iostream>
using namespace std;
int main(){
    int l1,l2,l3,p1,p2,p3,l,p;
    cin>>l1>>p1;
    cin>>l2>>p2;
    cin>>l3>>p3;
    l=l1+l2+l3;
    p=p1+p2+p3;
    if (l>p)
    {
        cout<<"Lucas"<<endl;
    }
    else if (l<p)
    {
        cout<<"Pedro"<<endl;

    }
    else{
        cout<<"Empate"<<endl;
    }
}