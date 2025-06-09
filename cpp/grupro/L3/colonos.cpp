#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef struct 
{
    int id;
    int nota;
} gente;

bool cmp(gente i, gente j){
    if (i.nota!=j.nota){
    return i.nota>j.nota;
    }
    return i.id<j.id;


}
int main(){
    int n,q,c,a,b;
    vector<gente> v1,v2;
    gente z;
    cin>>n>>q;

    for (int i = 0; i < q; i++)
    {
        cin>>z.nota>>z.id;
        v1.push_back(z);

    }
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        cin>>z.nota>>z.id;
        v2.push_back(z);
    }
    stable_sort(v1.begin(),v1.end(),cmp);
    v1.erase(v1.begin()+n, v1.end());
    for (int i = 0; i < v2.size(); i++)
    {
        if (binary_search(v1.begin(), v1.end(),v2[i],cmp))
        {
            cout<<"Sim\n";
        }
        else{
            cout<<"Nao\n";
        }
    }
}