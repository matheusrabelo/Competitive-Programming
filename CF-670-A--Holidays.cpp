/*
Codeforces 670 A
Holidays
http://codeforces.com/problemset/problem/670/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int mr, max, min, r, dias;
	cin >> dias;
	max = min = (dias/7)*2;
	r = dias%7;
	mr = 0;
	bool p = false;
	if(r <= 2) mr = r;
	if(r > 2 && r <= 5){
		mr = 2;
		p = true;
	}
	max += mr;
	if(r > 5){
		min += r-5;
		max += 2;
	}
	cout << min << " " << max;
	return 0;
}
