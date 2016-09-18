/*
URI 1635
Ballot Evaluation
https://www.urionlinejudge.com.br/judge/en/problems/view/1635
*/

#include <iostream>
#include <cstdio>

using namespace std;

int tvalue[50];
int tvalue2[50];
string nome[50];
int a,b;

void acp(bool g, int j){
	if(g){
		printf("Guess #%d was correct.\n",j+1);
	}else{
		printf("Guess #%d was incorrect.\n",j+1);
	}
}

int sym(string test){
	if(test == "<") return 1;
	if(test == "<=") return 2;
	if(test == ">") return 3;
	if(test == ">=") return 4;
	if(test == "=") return 5;
	if(test == "+") return 6;
	return 666;
}

int getPValue(string n){
	int i;
	for(i=0; i<a; i++){
		if(nome[i] == n){
			return tvalue[i];
		}
	}
}

int getPValue2(string n){
	int i;
	for(i=0; i<a; i++){
		if(nome[i] == n){
			return tvalue2[i];
		}
	}
}

int main(){
	int i,j;
	scanf("%d %d", &a, &b);
	bool guess = false;
	double total = 0;
	string tt;
	double dt;
	int t1;
	int t2;
	int st;
	char t;
	for(i=0; i<a; i++){
		cin >> nome[i];
		cin >> tvalue[i];
		t = getchar();
		if(t == '.'){
			cin >> tvalue2[i];
		}else{
			tvalue2[i] = 0;
		}
	}
	for(i=0; i<b; i++){
		guess = false;
		t1 = 0;
		t2 = 0;
		cin >> tt;
		t1 = getPValue(tt);
		t2 = getPValue2(tt);
		st = t1*10 + t2;
		cin >> tt;
		while(sym(tt)==6){
			cin >> tt;
			st += getPValue(tt)*10 + getPValue2(tt);
			cin >> tt;
		}
		cin >> dt;
		dt*= 10;
		switch(sym(tt)){
			case 1: //<
				guess = (st < dt);
				break;
			case 2: // <=
				guess = (st <= dt);
				break;
			case 3: //>
				guess = (st > dt);
				break;
			case 4: //>=
				guess = (st >= dt);
				break;
			case 5: // =
				guess = (st == dt);
				break;
		}
		acp(guess,i);
	}

}
