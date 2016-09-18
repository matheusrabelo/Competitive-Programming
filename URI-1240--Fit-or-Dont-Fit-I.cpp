/*
URI 1240
Fit or Dont Fit I
https://www.urionlinejudge.com.br/judge/en/problems/view/1240
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int dim(int num){
    int k=1;
    while(num>9){
        num/=10;
        k++;
    }
    return k;
}

int main(){
    int i,qt;
    scanf("%d", &qt);
    int a,b;
    int d;
    bool res;
    for(i=0; i<qt; i++){
        res = false;
        scanf("%d %d", &a, &b);
        d = pow(10,dim(b));
        if(((a-b)%d)== 0) res = true;
        if(res) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}
