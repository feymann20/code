
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i, N, M, num;
	cin >> N;
	vector <int> v(N);
	for(i=0; i < N; i++) //Lê vetor ordenado
		cin >> v[i];

	cin >> M;
	for(i=0; i < M; i++) {
		cin >> num; 	// Número buscado
        if( binary_search(v.begin(), v.end(), num) == true)
            cout << "SIM" << endl;

    else
        cout << "NAO" << endl;
	}

}
