/*
Codeforces 667 A
Pouring Rain
http://codeforces.com/problemset/problem/667/A
*/

#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define mp make_pair

using namespace std;

int main(){

	double d, h, v, e;
	cin >> d >> h >> v >> e;

	double vol = (d/2)*(d/2)*h*M_PI;
	e = (vol/h)*e;
	double vel = v-e;

	if(vel > 0){
		cout << "YES" << endl;
		printf("%.12lf", vol/vel);
	}else{
		cout << "NO";
	}

	return 0;
}
