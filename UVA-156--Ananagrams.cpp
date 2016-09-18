/*
UVA 156
Ananagrams 
https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=92
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int i;
	string palavra;
	set <string> s;
	set <string> ana;
	vector <string> vs;
	vector <string> correto;
	vector <string>::iterator it;
	while(true){
		cin >> palavra;
		if(palavra != "#")	vs.push_back(palavra);
		else break;

		for(i=0; i<palavra.size(); i++){
			palavra[i] = tolower(palavra[i]);
		}
		sort(palavra.begin(), palavra.end());
		if(s.count(palavra) != 0){
			ana.insert(palavra);
		}
		s.insert(palavra);
	}

	for(it=vs.begin(); it!=vs.end(); it++){
		palavra = *it;
		for(i=0; i<palavra.size(); i++){
			palavra[i] = tolower(palavra[i]);
		}
		sort(palavra.begin(), palavra.end());
		if(ana.count(palavra) == 0){
			correto.push_back(*it);
		}
	}
	sort(correto.begin(), correto.end());
	for(it=correto.begin(); it!=correto.end(); it++){
		cout << *it << endl;
	}
	return 0;
}
