/*
URI 1533
Detective Watson
https://www.urionlinejudge.com.br/judge/en/problems/view/1533
*/

#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main(){
	int qt,i;
	int *sus;
	int maior, nmaior;
	int index;
	while(scanf("%d", &qt) && qt!=0){
		sus = (int*) malloc(qt*sizeof(int));
		maior = 0;
		index = 0;
		nmaior = 0;
		for(i=0; i<qt; i++){
			scanf("%d", &sus[i]);
			if(sus[i]>maior) maior = sus[i];
		}
		for(i=0; i<qt; i++){
			if(sus[i] > nmaior && sus[i] < maior){
				index = i+1;
				nmaior = sus[i];
			}
		}
		printf("%d\n", index);
		free(sus);
	}
	return 0;
}
