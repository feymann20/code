
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int i, j, N, M, p, esq, dir, meio;

	cin >> N;
	int v[N];
	for(i=0; i < N; i++) {//Lê vetor ordenado
		cin >> v[i];
    }
	cin >> M;
	for(i=0; i < M; i++) {
		cin >> p; 	// Número buscado
esq=0;   dir=N-1;
		while(esq <= dir) { // Busca binária
			meio = (esq + dir)/2;
if(p == v[meio]) // achou
				break;
			if(p < v[meio]) // Joga fora metade direita
				dir = meio-1;
			else // Joga fora metade esquerda
				esq = meio+1;
		}
		if(v[meio] == p) cout << "SIM" << endl;
		else cout << "NAO" << endl;
	}
	return 0;
}
