/*
URI 1110
Throwing Cards Away
https://www.urionlinejudge.com.br/judge/en/problems/view/1110
*/

#include <iostream>
#include <cstdio>
#include <deque>

using namespace std;

int main(){
	int cartas,i,first=0;
	deque<int> dq;
	while(scanf("%d", &cartas) && cartas!=0){
		for(i=cartas; i>0; i--){
			dq.push_back(i);
		}
		cartas--;
		dq.pop_back();
		dq.push_front(dq.back());
		dq.pop_back();
		printf("Discarded cards: 1");
		while(cartas>1){
			cartas--;
			printf(", %d", dq.back());
			dq.pop_back();
			dq.push_front(dq.back());
			dq.pop_back();
		}
		printf("\nRemaining card: %d\n", dq.back());
		dq.pop_back();
	}
	return 0;
}
