#include <iostream>
#include <queue>
#include <vector>

using namespace std; 

// Estrutura para representar as coordenadas
struct Coords {
    int x, y;
};

int main() {
    int n; 
    int x0, y0; 
    int cell_value; 

    cin >> n; 

    vector<vector<int>> terreno(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cell_value;
            terreno[i][j] = cell_value;
        }
    }

    cin >> x0 >> y0; 

    queue<Coords> q;

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    int conexos = 0; 

    if (x0 >= 0 && x0 < n && y0 >= 0 && y0 < n && terreno[x0][y0] == 1) {
        q.push({x0, y0});    
        visited[x0][y0] = true; 
        conexos++;         
    } else {
        return 0; 
    }

    int dx[] = {-1, 1, 0, 0}; 
    int dy[] = {0, 0, -1, 1}; 

    while (!q.empty()) {
        Coords atual = q.front(); 
        q.pop();                   

        for (int i = 0; i < 4; i++) {
            int x1 = atual.x +dx[i]; 
            int y1 = atual.y +dy[i]; 

            if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n) {
                if (!visited[x1][y1] && terreno[x1][y1] == 1) {
                    visited[x1][y1]= true; 
                    q.push({x1, y1});      
                    conexos++;        
                }
            }
        }
    }

    cout << conexos << endl;

    return 0;