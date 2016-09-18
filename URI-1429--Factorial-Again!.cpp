/*
URI 1429
Factorial Again!
https://www.urionlinejudge.com.br/judge/en/problems/view/1429
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int cfac, total, fac, num;
	while(scanf("%d", &num) && num != 0){
		total = 0;
		fac = 1;
		cfac = 2;
		while(num>9){
			total += (num%10)*fac;
			fac = fac * cfac;
			cfac++;
			num = num/10;
		}
		total += num * fac;
		printf("%d\n", total);
	}
	return 0;
}
