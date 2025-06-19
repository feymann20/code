#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,n,h,b,a;
    float y,x;
    a=0;
    b=0;
    h=0;
    cin>>n>>y;
    for ( i = 0; i < n; i++)
    {
        cin>>x;
        h=h+x;
        if (h-y>=0)
        {
            a=1;
            b=i;
        }
        cout<<a<<" "<<b<<" "<<h<<" "<<y<<endl;
    }
    if (a==1)
    {
        cout<<b<<" "<<(h-y)<<endl;
    }
    else{
        cout<<"0"<<" "<<abs(h-y)<<endl;
    }
}
