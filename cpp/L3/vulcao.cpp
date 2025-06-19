#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int p,a,t;
    a=0;
    p=1;
    cin>>t;
    while (p!=0)
    {
        cin>>p;
        if (p>t and a==0)
        {
            a=1;
        }
    cout<<a<<endl;
    }
    if (a==1){
        cout<<"ALARME"<<endl;
    }
    else{
            cout<<"O Havai pode dormir tranquilo"<<endl;
}
    }