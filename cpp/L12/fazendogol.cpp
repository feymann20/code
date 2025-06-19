#include <iostream>
#include <cmath>
using namespace std;
int main(){
    char z,d,g,c;
    cin>>z>>d;
    cin>>g>>c;
    if (z==d)
    {
        cout<<"Driblado"<<endl;
        if (g==c){
        cout<<"Gol"<<endl;
        }
        else{
            cout<<"...e o goleiro pega";
        }
        
}
    else{
        cout<<"Bloqueado"<<endl;
    }
    }