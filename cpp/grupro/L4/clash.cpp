#include <iostream>
#include <queue>
using namespace std;
int main(){
int n,i,cartas,L,n1,n2,mE=0;
queue<int> eu,ad;
cin>>n;
for(i=0;i<n;i++){
    cin>>cartas;
    eu.push(cartas);
}
cin>>L;
for(i=0;i<L;i++){
    cin>>cartas;
    ad.push(cartas);
}
while (!eu.empty() && !ad.empty())
{
    n1=eu.front();
    n2=ad.front();
    eu.pop();
    ad.pop();
    if (n2>n1)
    {
        mE++;
    }
    else{
        eu.push(n1);
    }
}
    cout<<mE<<endl;
}