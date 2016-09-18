/*
URI 1905
Cops and Robbers
https://www.urionlinejudge.com.br/judge/en/problems/view/1905
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int v[5][5];
// 1 COPS 0 ROBB

int win(int x, int y){
    if(x == 4 && y == 4){
        if(v[4][4] == 0){
            return 1;
        }
    }
    v[x][y] = 2;
    if(x<4){
        if(v[x+1][y]==0){
            if(win(x+1, y) == 1){
                return 1;
            }
        }
    }
    if(x>0){
        if(v[x-1][y]==0){
            if(win(x-1, y) == 1){
                return 1;
            }
        }
    }
    if(y<4){
        if(v[x][y+1] == 0){
            if(win(x, y+1) == 1){
                return 1;
            }
        }
    }
    if(y>0){
        if(v[x][y-1]==0){
            if(win(x, y-1) == 1){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int testes, j, i;
    scanf("%d", &testes);
    for(j=0; j<testes; j++){
        for(i=0; i<5; i++){
            scanf("%d %d %d %d %d", &v[i][0], &v[i][1], &v[i][2], &v[i][3], &v[i][4]);
        }
        if(win(0, 0)){
            printf("COPS\n");
        }else{
            printf("ROBBERS\n");
        }
    }
    return 0;
}
