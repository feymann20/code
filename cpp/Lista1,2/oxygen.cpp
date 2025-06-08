#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,area,r;
    cin>>x>>y;
    area=(x-(9*y));
    r=area/9;
    if ((r-area)<0)
    {
        cout<<"Precisa de mais difusores!"<<"\n"<< abs(r+1)<<endl;
    }
    else{
        cout<<"Lar doce lar."<<endl;
    }
}