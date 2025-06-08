#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int SC,MK,CK;
    cin>>SC>>MK>>CK;
    if (SC==30)
    {
        cout<<"PROXIMO MUNDO"<<endl;
    }
    else{
        cout<< abs(SC-30)<<" "<< abs(MK-6)<<" "<<abs(CK-3) <<endl;
    }
}