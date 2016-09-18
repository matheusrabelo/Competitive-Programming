/*
URI 1323
Feynman
https://www.urionlinejudge.com.br/judge/en/problems/view/1323
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int qnt;
	int total,i;
	while(scanf("%d", &qnt) && qnt!=0){
		total = qnt*qnt;
		for(i=qnt; i>=2; i--) total+=(i-1)*(i-1);
		printf("%d\n", total);
	}
	return 0;
}
