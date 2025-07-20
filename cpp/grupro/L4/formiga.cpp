#include <iostream>
#include <stack>
#include <vector>
using namespace std; 
struct coord
{
   int x;
   int y;
};

int main()
{
   int n, i, j;
   stack<coord> q;
   cin >> n;
   int terreno[n][n];
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         cin >> terreno[i][j];
      }
   }
   int a, b, area = 0;
   coord aux,coordenada;
   cin >> a >> b;
   aux.x = a;
   aux.y = b;
   q.push(aux);
   while (true)
   {
      if (terreno[a][b]==1){
         area++;
         terreno[a][b] = 0;
      }
      if (terreno[a + 1][b] == 1 && a + 1 < n)
      {
         aux.x=a+1;
         aux.y=b;
         q.push(aux);
      }

      if (terreno[a][b + 1] == 1 && b + 1 < n)
      {
         aux.x=a;
         aux.y=b+1;
         q.push(aux);
      }
      if (terreno[a - 1][b] == 1 && a > 0)
      {
         aux.x=a-1;
         aux.y=b;
         q.push(aux);
      }
      if (terreno[a][b - 1] == 1 && b> 0)
      {
         aux.x=a;
         aux.y=b-1;
         q.push(aux);
      }
      
      if (q.empty()){
         break;
      }
      coordenada=q.top();
      a=coordenada.x;
      b=coordenada.y;
      q.pop();

   }
   cout<<area<<endl;
}