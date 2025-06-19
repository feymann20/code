#include <iostream>
#include   <cmath>
using namespace std;

int main(){
    int a,b,x,n,t,h;
    cin>>n,t;
    for (int i = 1; i < n+1; i++)
    {
        cin>>h;
        x=x+h;
        if (x>t and a==0)
        {
            b=i-1;
            a=1;
        }
        else if (x<=t and a==0)
        {
            b=i;
        }
        
    }
    cout<<b<<endl;   
}
