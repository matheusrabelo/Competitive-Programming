/*
UVA 514
Rails
http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=455
*/

#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>

using namespace std;

int main(){
	int vag, i, k;
	bool saiu;
	while(true){
		cin >> vag;
		if(vag == 0) break;
		cin >> k;
		while(k != 0){
			queue<int> a;
			queue<int> b;
			stack<int> s;
			saiu = false;
			for(i=0; i<vag; i++) a.push(i+1);
			b.push(k);
			for(i=0; i<vag-1; i++){
				cin >> k;
				b.push(k);
			}


			while(true){
				if(b.empty()) break;
				if(s.empty() && a.empty()){
					saiu = true;
					break;
				}
				if(!s.empty()){
					if(b.front() == s.top()){
						b.pop();
						s.pop();
					}else{
						s.push(a.front());
						a.pop();
					}
				}else{
					s.push(a.front());
					a.pop();
				}
				if(a.empty() && !s.empty()){
					if(b.front() != s.top()){
						saiu = true;
						break;
					}
				}

			}
			if(saiu) puts("No");
			else puts("Yes");

			cin >> k;
		}
		puts("");
	}
	return 0;
}
