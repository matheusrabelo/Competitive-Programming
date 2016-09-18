/*
URI 1259
Even and Odd
https://www.urionlinejudge.com.br/judge/en/problems/view/1259
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
	int i;
	int qt;
	int *pares;
	int *impares;
	int tpares= 0;
	int timpares = 0;
	int num;
	scanf("%d", &qt);
	pares = (int*) calloc(qt, sizeof(int));
	impares = (int*) calloc(qt, sizeof(int));
	for(i=0; i<qt; i++){
		scanf("%d", &num);
		if(num%2 == 0){
			pares[tpares++] = num;
		}else{
			impares[timpares++] = num;
		}
	}
	sort(pares, pares+tpares);
	sort(impares, impares+timpares);
	for(i=0; i<tpares; i++){
		printf("%d\n", pares[i]);
	}
	for(i=timpares-1; i>=0; i--){
		printf("%d\n", impares[i]);
	}
	return 0;
}
