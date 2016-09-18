/*
URI 1340
I Can Guess the Data Structure!
https://www.urionlinejudge.com.br/judge/en/problems/view/1340
*/

#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#define MAX 1010

using namespace std;

int main(){
    int quantidade, i, comando, numero;
    stack<int> sk;
    queue<int> qe;
    priority_queue<int> pq;
    int queue, stack, pqueue;
    while(scanf("%d", &quantidade)!=EOF){
        queue = stack = pqueue = 1;
        for(i=0; i<quantidade; i++){
            scanf("%d %d", &comando, &numero);
            if(comando == 1){
                sk.push(numero);
                qe.push(numero);
                pq.push(numero);
            }else if(comando == 2){
                if(numero != sk.top()){
                    stack = 0;
                }
                if(numero != qe.front()){
                    queue = 0;
                }
                if(numero != pq.top()){
                    pqueue = 0;
                }
                sk.pop();
                qe.pop();
                pq.pop();
            }
        }
        while(!sk.empty()){
            sk.pop();
            qe.pop();
            pq.pop();
        }
        if(stack==0 && queue==0 && pqueue==0) printf("impossible");
        if(stack==1 && queue==0 && pqueue==0) printf("stack");
        if(stack==0 && queue==1 && pqueue==0) printf("queue");
        if(stack==0 && queue==0 && pqueue==1) printf("priority queue");
        if((stack+queue+pqueue)>1) printf("not sure");
        puts("");
    }
    return 0;
}
