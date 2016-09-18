/*
URI 1371
Close the Doors!
https://www.urionlinejudge.com.br/judge/en/problems/view/1371
*/

#include <iostream>
#include <cstdio>

int main(){
	long int portas, i;
	scanf("%ld", &portas);
	while(portas!=0){
		printf("1");
		for(i = 2; (i*i)<=portas; i++){
			printf(" %ld", i*i);
		}
		printf("\n");
		scanf("%ld", &portas);
	}

	return 0;
}
