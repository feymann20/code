#include<iostream>
#include<stack>
#include <queue>
#include<string>
using namespace std;

int main(){
    int n,m,i;
    string num1,num2,a,string1;
    int p=0,b=0;
    string bloco;
    stack<string> q,f;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>bloco;
        q.push(bloco);
    }
    for (i = 0; i < n; i++)
    {
        a="";
        num1=q.top();
        string1=num1;
        q.pop();
            if (q.size()!=0)
            {
                num2=q.top();
                a=num1+num2;
                if (a=="100011"||a=="011100" || a=="001110"||a=="110001" || a=="010101"|| a=="101010")
                {
                    p=p+10;
                    q.pop();
                }
                else{
                    f.push(string1);
                    cout<< f.top() <<endl;
                    if(f.size()>=m){
                        cout<< "game over"<<endl;
                        b=1;
                        break;
                    }
                }

            }
    }
    
    
    if(b==0){
        cout << p << endl;
    }

}