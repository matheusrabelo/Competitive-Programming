/*
UVA 1586
Molar mass
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4461
*/

#include <iostream>
#include <cstdio>
#include <cmath>

#define C 12.01
#define H 1.008
#define O 16.00
#define N 14.01

using namespace std;

int getDigit(char q){
	if((q-'0')>=0 && (q-'0')<=9){
		return (q-'0');
	}else{
		return (-1);
	}
}

int main(){
	double temp, total;
	int num, i, j, qt;
	string a;

	cin >> qt;

	while(qt--){
		total = 0;
		num = 0;
		temp = 0;
		cin >> a;
		i=0;
		while(i<a.size()){
			if(getDigit(a[i]) == -1){
				num = 0;
				switch(a[i]){
					case 'C':
						temp = C;
						break;
					case 'H':
						temp = H;
						break;
					case 'O':
						temp = O;
						break;
					case 'N':
						temp = N;
						break;
				}
				j = i+1;
				while(getDigit(a[j]) != -1){
					num = num*10 + getDigit(a[j]);
					j++;
				}
				if(num == 0) num = 1;
				total += num*temp;
				i = j-1;
			}
			i++;
		}
		printf("%.3lf\n", total);
	}
	return 0;
}
