#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int n,m,i,num1,num2,pontos,total=0;
    int bloco;
    stack<int> q;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>bloco;
        q.push(bloco);
        }
    while (!q.empty())
    {
        num1=q.top();
        q.pop();
        num2=q.top();
        total=num1+num2;
        if (total%111==0)
        {
            pontos+=10;
        }
        if (total>m*100)
        {
            cout<<"game over"<<endl;
        }
        
    
        
    }
    

}