#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    int bloco1,bloco2,a,string1,inverso;
    int pontos=0;
    bool gameover=false;
    int bloco,altura=1;
    stack<int> q,f;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>bloco;
        q.push(bloco);
    }
    while(!q.empty() && !gameover)
    {
        bloco1=q.top();
        q.pop();
        inverso=abs(bloco1-111);
            if (!q.empty())
            {
                bloco2=q.top();
                if (bloco2 == inverso)
                {
                    pontos=pontos+10;
                    q.pop();
                }
                else{
                    altura++;
                }

            }
            if (altura >= m){
                cout << "game over" << endl;
                    gameover = true;
                }
        }       
    
    
    
    if(!gameover){
        cout << pontos << endl;
    }
}

