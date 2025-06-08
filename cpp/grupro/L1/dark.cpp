#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
struct tipo1{
    int dia;
    int mes;
    int ano;
};
bool ordem(tipo1 i, tipo1 j) {
    if (i.ano != j.ano) {
        return i.ano < j.ano; // Se os anos são diferentes, ordene por ano
    }
    // Se os anos são iguais, compare os meses
    if (i.mes != j.mes) {
        return i.mes < j.mes; // Se os meses são diferentes, ordene por mês
    }
    // Se anos e meses são iguais, compare os dias
    return i.dia < j.dia; // Ordene por dia
}
int main(){
    vector<tipo1> lista;
    tipo1 aux;
    int i,j,a;
    a=0;
    vector<int> v1,v2,v3;
    while (cin >> aux.dia >> aux.mes >> aux.ano){
        v1.push_back(aux.dia);
        v2.push_back(aux.mes);
        v3.push_back(aux.ano);
        a=a+1;
    }
    for (j = 0; j < a; j++) {
        lista.push_back(aux);
    }
    stable_sort(lista.begin(), lista.end(),ordem);

    for (i = 0; i < lista.size(); i++)
    {
    cout<<lista[i].dia<<" "<<lista[i].mes<<" "<<lista[i].ano<<endl;
    }
    return 0;
}
