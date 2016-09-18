/*
UVA 1585
Score
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4460
*/


#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int i, contador, total, qt;
	string a;
	cin >> qt;
	while(qt--){
		contador = 0;
		total = 0;
		cin >> a;
		for(i=0; i<a.size(); i++){
			if(a[i] == 'O'){
				total += ++contador;
			}else{
				contador = 0;
			}
		}
		printf("%d\n", total);
	}
}
