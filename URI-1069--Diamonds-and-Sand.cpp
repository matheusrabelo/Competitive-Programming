/*
URI 1069
Diamonds and Sand
https://www.urionlinejudge.com.br/judge/en/problems/view/1069
*/

#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main(void){
	int quantidade;
	string texto;
	int diamonds;
	stack <int> pilha;
	scanf("%d", &quantidade);
	for(int i=0; i<quantidade; i++){
		diamonds = 0;
		cin >> texto;
		while(!pilha.empty()){
			pilha.pop();
		}
		for(int j=0; texto[j]!='\0'; j++){
			if(texto[j] == '<') pilha.push(1);
			if(texto[j] == '>'){
				if(!pilha.empty()){
					pilha.pop();
					diamonds++;
				}
			}
		}
		printf("%d\n", diamonds);
	}
	return 0;
}
