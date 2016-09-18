/*
Codeforces 669 B
Little Artem and Grasshopper
http://codeforces.com/problemset/problem/669/B
*/

#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define rep(x) for(register int itr=0; itr<(x); itr++)
#define rep2(x) for(register int itr2=0; itr2<(x); itr2++)

using namespace std;

int main(int arg, char* argv[]){

	int i, s, sz, cel;
	string p;
	set<int> st;
	bool f = false;

	scanf("%d ", &s);
	getline(cin, p);

	sz = p.size();

	int v[sz];

	for(i=0; i<sz; i++){
		scanf("%d", &v[i]);
	}

	i = 0;
	cel = 0;
	while(true){
		if(p[i] == '<'){
			cel -= v[i];
			i = i - v[i];
		}else if(p[i] == '>'){
			cel += v[i];
			i = i + v[i];
		}
		if(st.count(cel) != 0){
			f = true;
			break;
		}
		st.insert(cel);
		if(i < 0) break;
		if(i > (sz-1)) break;
	}

	if(f) cout << "INFINITE";
	else cout << "FINITE";

	return 0;
}
