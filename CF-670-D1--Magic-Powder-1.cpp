/*
Codeforces 670 D1
Magic Powder - 1
http://codeforces.com/problemset/problem/670/D1
*/

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1234;

int main(){
	int l, n, m;
	int c[MAXN];
	int a[MAXN];
	double f[MAXN];
	double min;
	int imin;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
	    cin >> l;
	    c[i] = l;
	}
	for(int i = 0; i < n; i++){
	    cin >> l;
	    a[i] = l;
	    f[i] = (l/c[i]);
	}
	while(m--){
		imin = 0;
		for(int i = 0; i < n; i++){
			f[i] = (a[i]/c[i]);
			if(f[i] < f[imin]){
				 imin = i;
			}
		}
		a[imin]++;
	}
	imin = 0;
	for(int i = 0; i < n; i++){
		f[i] = (a[i]/c[i]);
		if(f[i] < f[imin]){
			 imin = i;
		}
	}
	min = round(f[imin]);
	cout << min;
	return 0;
}
