#include <iostream>
#include <queue>
using namespace std; // queue -> std
int main() {
	int n,i,j,num;
   queue<int> q;
   vector<int>tauto;
   cin>>n;
   vector<vector<int>> terreno;
   for ( i = 0; i < n; i++){
      for ( j = 0; i < n; j++){
         cin >> num;
         terreno[i][j]=num;
      }
   
   }
      int a,b;
      cin>>a>>b;

        while (q.front()==1){
            if (terreno[i+1][j]==1 && i+1<n){

               q.push(terreno[i][j]);
            }
            if (terreno[i][j+1]==1 && j+1<n){

               q.push(terreno[i][j]);
            }
            if (terreno[i-1][j]==1 && i-1>0){

               q.push(terreno[i][j]);
            }
            if (terreno[i][j-1]==1 && j-1>0){

               q.push(terreno[i][j]);
         }
        }
}

