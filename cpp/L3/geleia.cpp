#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i,a,b,p;
    a=0;
    b=0;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        cin>>p;
        if (p==10)
        {
            a += 1;
        }
        if (p==11)
        {
            b+=1;
        }
    }
    if (a-b>0)
    {
        cout<<"Tradicional"<<endl;
    }
    else{
        cout<<"Geleia"<<endl;
    }
}