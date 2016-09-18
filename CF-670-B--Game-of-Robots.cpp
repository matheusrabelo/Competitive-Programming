/*
Codeforces 670 B
Game of Robots
http://codeforces.com/problemset/problem/670/B
*/

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int main(){
	long long n, k, l;
	cin >> n >> k;
	long long r[MAXN];
	for(long long i = 0; i < n; i++){
	    cin >> l;
	    r[i] = l;
	}
	long long vn1 = (-1 + sqrt(8*k))/2;
	long long sol = k - (1+vn1)*vn1/2;
	cout << r[sol-1];
	return 0;
}
