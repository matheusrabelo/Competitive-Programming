/*
URI 1089
Musical Loop
https://www.urionlinejudge.com.br/judge/en/problems/view/1089
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i,amostras, nota, picos;
	int ant, first, second, paridade;
	while(scanf("%d", &amostras) && amostras != 0){
		paridade = 2;
		picos = 0;
		scanf("%d", &nota);
		first = ant = nota;
		scanf("%d", &nota);
		if(nota>ant){
			paridade = 1;

		}
		if(nota<ant){
			paridade = 0;
		}
		second = ant = nota;
		for(i=2; i<amostras; i++){
			scanf("%d", &nota);
			if(paridade == 1){
				if(nota<ant){
					picos++;
					paridade = 0;
				}
			}
			if(paridade == 0){
				if(nota>ant){
					picos++;
					paridade = 1;
				}
			}
			ant = nota;
		}
		if(paridade == 1){
			if(first<ant){
				picos++;
				paridade = 0;
			}
		}
		if(paridade == 0){
			if(first>ant){
				picos++;
				paridade = 1;
			}
		}
		if(paridade == 1){
			if(second<first){
				picos++;
				paridade = 0;
			}
		}
		if(paridade == 0){
			if(second>first){
				picos++;
				paridade = 1;
			}
		}
		printf("%d\n", picos);
	}
	return 0;
}
