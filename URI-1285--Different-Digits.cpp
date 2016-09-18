/*
URI 1285
Different Digits
https://www.urionlinejudge.com.br/judge/en/problems/view/1285
*/

#include <iostream>
#include <cstdio>

using namespace std;

bool notRep(int numero){
	int i;
	bool r = true;
	int digitsfreq[] = {0,0,0,0,0,0,0,0,0,0};
	while(numero>9){
		digitsfreq[numero%10]++;
		numero = numero/10;
	}
	digitsfreq[numero]++;
	for(i=0; i<10; i++){
		if(digitsfreq[i] > 1) r = false;
	}
	return r;
}

int main(){
	int a, b, i, total;
	while(scanf("%d %d", &a, &b)!=EOF){
		total = 0;
		for(i=a; i<=b; i++){
			if(notRep(i)) total++;
		}
		cout << total << endl;
	}
	return 0;
}
