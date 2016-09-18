/*
UVA 12808
Banning Balconing
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4673
*/

#include <iostream>
#include <cstdio>
#include <cmath>

#define GV 9.81

using namespace std;

double distancia(int altura, int velocidade){
	double tempo = sqrt((2*altura)/(GV*1000));
	return velocidade*tempo;
}

int main(){
	int qt;
	int l, d, alt, vel;
	double dist;
	cin >> qt;
	while(qt--){
		scanf("%d %d %d %d", &l, &d, &alt, &vel);
		dist = distancia(alt, vel);
		if((dist < (d-500)) || (dist > (d+l+500))){
			puts("FLOOR");
		}else if((dist > (d+500)) && (dist < (d+l-500))){
			puts("POOL");
		}else{
			puts("EDGE");
		}
	}
	return 0;
}
