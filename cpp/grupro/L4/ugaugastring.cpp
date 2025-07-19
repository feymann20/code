#include <iostream>
#include <stack>
#include <string>

using namespace std;

string inverter_bloco(const string& bloco){
	string inverso;
	for(char c : bloco){
		inverso += (c == '0') ? '1' : '0'; //operador terciário para inverter a string - true-false 
	}
	return inverso;
}

int main(){
	int n, m;
	cin >> n >> m;
	
	stack<string> torre;
	int pontos = 0;
	bool gameover = false;
	string bloco, topo, inverso;
	
	for(int i = 0; i < n && !gameover; i++){  //percorre a string
		cin >> bloco;	
		
		if(!torre.empty()){
			topo = torre.top();
			inverso = inverter_bloco(topo);
			
			if(bloco == inverso){
				torre.pop();
				pontos += 10;
				continue;
			}
		}
		
		torre.push(bloco);
			
		if(torre.size() >= m){
			gameover = true;
		}
	}
	
	if(gameover){
		cout << "Game Over" << endl;
	}else{
			cout << "Pontuação: " << pontos << endl;
		}
}