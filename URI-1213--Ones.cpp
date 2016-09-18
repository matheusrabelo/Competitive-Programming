/*
URI 1213
Ones
https://www.urionlinejudge.com.br/judge/en/problems/view/1213
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int i, teste, contagem;
	long long int mult;
	int first = 0;
	while(scanf("%d", &teste) != EOF){
		mult = 11;
		contagem = 1;
		while((mult%teste != 1) && ((mult%2!=0) || (mult%5 !=0))){
			mult %= teste;
			mult = mult*10+1;
			contagem++;
		}
		cout << contagem << endl;
	}
	return 0;
}
