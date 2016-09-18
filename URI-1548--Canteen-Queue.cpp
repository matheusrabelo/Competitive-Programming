/*
URI 1548
Canteen Queue
https://www.urionlinejudge.com.br/judge/en/problems/view/1548
*/

#include <iostream>
#include <cstdio>

using namespace std;

int numPermanece(int* aluno, int qtalunos){
	int i,j;
	int temp;
	int perm =  0;
	int inicial[1001];

	for(i=0; i<qtalunos; i++) inicial[i] = aluno[i];

	for(i=0; i<qtalunos; i++){
		for(j=0; j<(qtalunos-i-1); j++){

			if(aluno[j] < aluno[j+1]){
				temp = aluno[j];
				aluno[j] = aluno[j+1];
				aluno[j+1]= temp;
			}

		}
	}

	for(i=0; i<qtalunos; i++){
		if(inicial[i] == aluno[i]){
			perm++;
		}
	}

	return perm;
}

int main(){
	int i,j;
	int salas, alunos;
	int aluno[1001];
	scanf("%d", &salas);
	for(i=0; i<salas; i++){
		scanf("%d", &alunos);
		for(j=0; j<alunos; j++) scanf("%d", &aluno[j]);
		printf("%d\n", numPermanece(aluno, alunos));
	}
	return 0;
}
