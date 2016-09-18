/*
URI 1162
Train Swapping
https://www.urionlinejudge.com.br/judge/en/problems/view/1162
*/

#include <iostream>
#include <cstdio>

using namespace std;

int numBB(int* trem, int vagoes){
	int i,j;
	int trocas = 0;
	int temp;
	for(i=0; i<vagoes; i++){
		for(j=0; j<(vagoes-i-1); j++){
			if(trem[j] > trem[j+1]){
				temp = trem[j];
				trem[j] = trem[j+1];
				trem[j+1]= temp;
				trocas++;
			}
		}
	}
	return trocas;
}

int main(){
	int i, j, qt, vag;
	scanf("%d", &qt);
	int trem[51];
	for(i=0; i<qt; i++){
		scanf("%d", &vag);
		for(j=0; j<vag; j++) scanf("%d", &trem[j]);
		printf("Optimal train swapping takes %d swaps.\n", numBB(trem, vag));
	}
	return 0;
}
