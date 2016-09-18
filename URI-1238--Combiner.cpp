/*
URI 1238
Combiner
https://www.urionlinejudge.com.br/judge/en/problems/view/1238
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int i, j, qt;
	int state, p, q, maior, ta, tb;
	char a[51], b[51];
	scanf("%d",&qt);
	for(i=0; i<qt; i++){
		scanf("%s", a);
		scanf("%s", b);
		state = 0;
		p = q = 0;
		ta = strlen(a);
		tb = strlen(b);
		maior = ta>tb? ta: tb;
		for(j=0; j<2*maior; j++){
			if(state == 0){
				if(p<ta)	printf("%c", a[p]);
				p++;
				state = 1;
			}else{
				if(q<tb)	printf("%c", b[q]);
				q++;
				state = 0;
			}
		}
		puts("");
	}
	return 0;
}
