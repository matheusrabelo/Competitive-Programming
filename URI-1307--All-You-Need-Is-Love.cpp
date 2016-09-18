/*
URI 1307
All You Need Is Love
https://www.urionlinejudge.com.br/judge/en/problems/view/1307
*/

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;

int mdc(int a, int b){
	int temp;
	if(b>a){
		temp = a;
		a=b;
		b=temp;
	}
	while(a%b != 0){
		temp = a;
		a = b;
		b = temp%b;
	}
	return b;
}


int main(){
	int i, j, casos, num1, num2;
	char love[31];
	scanf("%d", &casos);
	for(j=0; j<casos; j++){
		cin >> love;
		num1 = 0;
		num2 = 0;
		for(i=0; love[i] != '\0'; i++){
			if(love[strlen(love)-i-1] == '1'){
				num1 += pow(2, i);
			}
		}
		for(i=0; i<=31; i++) love[i] = 0;
		cin >> love;
		for(i=0; love[i] != '\0'; i++){
			if(love[strlen(love)-i-1] == '1'){
				num2 += pow(2, i);
			}
		}
		if(mdc(num1,num2) != 1){
			cout << "Pair #" << j+1 << ": All you need is love!" << endl;
		}else{
			cout << "Pair #" << j+1 << ": Love is not all you need!" << endl;
		}
	}
	return 0;
}
