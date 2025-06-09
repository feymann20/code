#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n,m,p;
    vector<int> x,y;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        x.push_back(p);
    }
    cin>>m;
    sort(x.begin(),x.end());
    for (int i = 0; i < m; i++)
    {
        cin>>p;
        y.push_back(p);
    }
    
    for (int i = 0; i < m; i++)
    {
        if(binary_search(x.begin(), x.end(),y[i])){
            cout<<"Repetido\n";
        }
        else{
    
            cout<<"Temos que pegar!\n";
                    x.push_back(y[i]);
                    sort(x.begin(),x.end());
        }
    }
    
}