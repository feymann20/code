#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
struct amigo
{
    string nome;
    int peso;
};

int main (){
    int n,c,k,j;
    cin>>n;
    vector<amigo> v;
    vector<amigo> aux(n); 
    for (int  i = 0; i <n; i++)
        {
        cin>>aux[i].nome>>aux[i].peso;

    }
    cin>>c;
    for ( k = 0; k < n; k++)
        {
        aux[k].peso;
        if (aux[k].peso>c)
            {
            v.push_back(aux[k]);
        }
    }
    if (v.size()>0)
    {
        cout<<"Vamos virar almoço de aranhas gigantes!"<<endl;
            for (j=0; j<v.size();j++ ){
                cout<<v[j].nome<<endl;
            }
    }
    else{
        cout<<"Vamos todos encontrar a montanha!"<<endl;
    }
    
}