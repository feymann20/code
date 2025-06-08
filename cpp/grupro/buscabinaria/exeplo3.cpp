#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;

struct planeta{
    string nome;
    int imp;
};

bool cmp(planeta a, planeta b){
    return (a.nome < b.nome);
}

int main() {
    vector<planeta> planetas;
    planeta plan;
    int n,i,num,total=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> plan.nome >> plan.imp;
        planetas.push_back(plan);
    }
    cin >> num;
    string nom;
    vector<planeta>::iterator it;
    for(i=0;i<num;i++){
        cin >> plan.nome;
        it = lower_bound(planetas.begin(),planetas.end(),plan,cmp);
        if (it->nome == plan.nome)
            total += it->imp;
    }
    cout << total << endl;
}

