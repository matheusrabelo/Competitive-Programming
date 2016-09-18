/*
URI 1039
Fire Flowers
https://www.urionlinejudge.com.br/judge/en/problems/view/1039
*/

#include <stdio.h>
#include <cmath>
double distancia(int x1, int y1, int x2, int y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(){
	double dist;
	int r1, x1, y1, r2, x2, y2;
	while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2)!=EOF){
		if(distancia(x1,y1,x2,y2)>r1-r2){
			printf("MORTO\n");
		}else{
			printf("RICO\n");
		}
	}
	return 0;
}
