#include <iostream>
#include <queue>
using namespace std; // queue -> std
struct coord
{
   int x;
   int y;
};

int main() {
	int n,i,j,num;
   queue<coord> q;
   vector<int>tauto;
   cin>>n;
   vector<vector<int>> terreno(n, vecotr<int>(n));
   for ( i = 0; i < n; i++){
      for ( j = 0; i < n; j++){
         cin >> num;
         terreno[i][j]=num;
      }
   
   }
      int a,b;
      coord aux;
      cin>>a>>b;
      aux.x=a;
      aux.y=b;

      q.push(aux)w
        while (q.front()==1){
         q.pop()
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

