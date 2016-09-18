/*
URI 1104
Exchanging Cards
https://www.urionlinejudge.com.br/judge/en/problems/view/1104
*/

#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
	int qta, qtb, i, num;
	unsigned long int res;
	set<int> a;
	set<int> b;
	set<int> sa;
	set<int> sb;
	set<int>::iterator it;
	while(scanf("%d %d", &qta, &qtb) && qta != 0 && qtb !=0 ){
		a.clear();
		b.clear();
		sa.clear();
		sb.clear();
		for(i=0; i<qta; i++){
			scanf("%d", &num);
			a.insert(num);
			sa.insert(num);
		}
		for(i=0; i<qtb; i++){
			scanf("%d", &num);
			b.insert(num);
			sb.insert(num);
		}
		for(it=a.begin(); it!=a.end(); it++){
			sb.erase(*it);
		}
		for(it=b.begin(); it!=b.end(); it++){
			sa.erase(*it);
		}
		if(sa.size()>sb.size()) res=sb.size();
		else res=sa.size();
		printf("%lu\n", res);
	}
}
