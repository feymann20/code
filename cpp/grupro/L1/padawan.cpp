#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
struct padawan {
string name;
int missioni;
int missionf;
};
bool cmp( padawan i, padawan j){
    return(i.name< j.name);
}
 
int main() {
    vector<padawan> pada;
    padawan aux;
    int i,n,total;
    total=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>aux.name>>aux.missioni>>aux.missionf;
        aux.missionf=abs(aux.missioni-aux.missionf);
        pada.push_back(aux);

    }
    stable_sort(pada.begin(), pada.end(), cmp);
    for (int k=0 ; k<n;k++){
        cout<<pada[k].name<<" "<<pada[k].missionf<<endl;
    }  
   }
