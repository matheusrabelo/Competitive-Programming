/*
Codeforces 580 A
Kefa and First Steps
http://codeforces.com/problemset/problem/580/A
*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    int i, dias;
    int* total;
    scanf("%d", &dias);
    total = (int*) malloc(dias*sizeof(int));
    int seq = 1, maior = 1;
    for(i = 0; i<dias; i++){
        scanf("%d", &total[i]);
        if(i>0){
            if(total[i]>=total[i-1]){

                seq++;
                if(seq>maior){
                    maior = seq;
                }
            }else{
                seq= 1;
            }
        }
    }

    printf("%d", maior);

    return 0;
}
