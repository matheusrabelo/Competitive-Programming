/*
URI 1558
Sum of Two Squares
https://www.urionlinejudge.com.br/judge/en/problems/view/1558
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i,num,pa,pb;
    int v[101];
    bool res;
    int prod;
    for(i=0; i<101; i++)    v[i] = i*i;
    while(scanf("%d", &num) != EOF){
        pa = 0;
        pb = 100;
        res = false;
        while(pa != pb){
            prod = v[pa] + v[pb];
            if(prod>num){
                pb--;
            }
            if(prod<num){
                pa++;
            }
            if(prod==num){
                res = true;
                break;
            }
        }
        prod = v[pa] + v[pb];
        if(prod==num)   res = true;
        if(res){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
