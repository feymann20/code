#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n,entry,a,b;
    vector<int> v;
    queue<int> f,g;
    cin>>n;
    int form[n][n];
    for ( int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
           cin>>form[i][j];
        }
    }
    cin>>a>>b;
    for ( int i = a; i < n; i++){
        for (int j = b; j < n; j++){
            for (int k = 0; k < n; k++)
            {
             if (form[i+k][j]==1 && k+i<n)
             {
                f.push(1);
             }
             else{
                break;
             }
             
            }
            for (int k = 0; k < n; k++)
            {
             if (form[i][j+k]==1 && k+i<n)
             {
                f.push(1);
             }
             else{
                break;
             }
             
            }
           for (int k = 0; k < n; k++)
            {
             if (form[i+k][j]==1 && k-i>n)
             {
                f.push(1);
             }
             else{
                break;
             }
             
            }
            for (int k = 0; k < n; k++)
            {
             if (form[i][j-k]==1 && k-j>0)
             {
                f.push(1);
             }
             else{
                break;
             }
             
            }
        }
        
    }
    int resul;
    resul=f.size()-n*n+10;
    cout<<resul<<endl;
    
     
    
}

