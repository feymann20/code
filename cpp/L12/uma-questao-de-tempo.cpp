#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int A,B,C,D,E,F,a,b,c,d,e,f,s;
    cin>>A>>B>>C>>D>>E;
    a=2*abs(A-2023);
    b=2*abs(B-2023);
    c=2*abs(C-2023);
    d=2*abs(D-2023);
    e=2*abs(E-2023);
    f=2*abs(F-2023);
    s=a+b+c+d+e+f;
    cout<< "Luther " << a<< "\n" <<"Diego "<<b<<"\n"<<"Alisson "<<c<<"\n"<<"Klaus "<<d<<"\n"<<"Five "<<s<<"\n"<<"Ben "<<e<<"\n"<<"Viktor "<<f<<endl;
}
