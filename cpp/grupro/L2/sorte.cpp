#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;


    
int main (){
    int N,a,M,b;
    b=0;
    vector<int>lep1;
    vector<int>v[N];
    
    cin>>N;
    for(int i=0; i<N/2;i++){
        cin>>a;
        lep1.push_back(a);
    }

    for(int j=0; j<N/2;j++){
        cin>>a;
        lep1.push_back(a);
    }
     sort(lep1.begin(),lep1.end());
    //sort(lep2.begin(),lep2.end())
    for (int i=0 ;i<lep1.size();i++){

        cout<<lep1[i];
    }
        cin>>a;

    if( binary_search(lep1.begin(), lep1.end(),a) == true)
        
    for( int i=0;i<N;i++){
        if (v[i]=lep1[i]){
            b=b+b;
        }
    }

        if (b==6){
            cout<<"Sortudo,ganhou os dois potes"<<endl;
    }

}














