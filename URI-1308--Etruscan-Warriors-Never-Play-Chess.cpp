/*
URI 1308
Etruscan Warriors Never Play Chess
https://www.urionlinejudge.com.br/judge/en/problems/view/1308
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	long long int i, k, qt, num;
	scanf("%lld", &qt);
	for(i=0; i<qt; i++){
		scanf("%lld", &num);
		k = floor((-1 + sqrt(1-4*1*(-2*num)))/2);
		printf("%lld\n", k);
	}
}
