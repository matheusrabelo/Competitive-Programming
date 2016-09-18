/*
URI 1068
Parenthesis Balance I
https://www.urionlinejudge.com.br/judge/en/problems/view/1068
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char expressao[10010];
	int total;
	while(scanf("%s",&expressao)!=EOF){
		total = 0;
		for(int i = 0; i<strlen(expressao); i++){
			if(expressao[i] == ')' && total == 0){
				total = 1;
				break;
			}
			if(expressao[i] == '('){
				total++;
			}
			if(expressao[i] == ')' && total != 0){
				total--;
			}
		}
		if(total == 0){
			puts("correct");
		}else{
			puts("incorrect");
		}
	}
	return 0;
}
