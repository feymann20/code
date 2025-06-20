#include <iostream>
#include <queue>
using namespace std;
int main(){
    int i,E,n,m,aux;
    queue<int> processo;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin>>E;
        processo.push(E);
    }
    for (i = 0; i < m; i++)
    {
    if (!processo.empty())
    {
        aux=processo.front()-1;
    processo.pop();
        if (aux>0)
        {
            processo.push(aux);
        }
    }
    
    
    }
    if(processo.size()!=0){
        cout<<processo.size()<<endl;
        while (!processo.empty())
        {
            cout << processo.front();
            processo.pop();
        if (!processo.empty()){
            cout<< " ";
        }
        }
     cout<<endl;   
    }

    else{
        cout<<"pronto"<<endl;
    }
}