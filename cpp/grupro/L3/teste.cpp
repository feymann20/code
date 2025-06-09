#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n,c;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        v.push_back(i);
        cout<<v[i]<<" ";
    }
    cin>>c;
    cout<<endl;
    v.erase(v.begin(),v.end()+c);
    for (int i = 0; i <= n; i++)
    {
        cout<<v[i]<<" ";
        
    }
}