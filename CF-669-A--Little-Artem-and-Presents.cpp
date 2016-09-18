/*
Codeforces 669 A
Little Artem and Presents
http://codeforces.com/problemset/problem/669/A
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

	int qt, l, x, c = 0;
	cin >> qt;

	c = 1;
	qt = qt - 1;
	l = 1;
	while(qt >= 0){
		if(l == 2){
			qt--;
			if(qt >= 0) c++;
			l = 1;
		}else{
			qt = qt-2;
			if(qt >= 0)	c++;
			l = 2;
		}
	}
	cout << c;

	return 0;
}
