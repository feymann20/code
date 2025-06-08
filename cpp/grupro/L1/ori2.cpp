#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


int main(){
    int n,XP,bonus2;
    cin>>n;
    vector<int>missoes(n);
    vector<int>bonus(n);
    int total=0;
    for (int i = 0; i < n; i++)
    {
     cin>>missoes[i];
    }
    for (int j= 0; j < n; j++)
    {
        cin>>bonus[j];
    }
    cin>>XP>>bonus2;
    
    for (int k=0; k<n;k++)
    {
        total=total+missoes[k]*(bonus[k]+bonus2);
    }
    
    if (total>=XP)
    {
        cout<<"Upou de Nivel!"<<endl;
    }
    else{
        cout<<"Nao foi dessa vez!"<<endl;
    }
    
}
