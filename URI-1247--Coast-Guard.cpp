/*
URI 1247
Coast Guard
https://www.urionlinejudge.com.br/judge/en/problems/view/1247
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double d, vf, vg;
    double dg;
    double t1;
    double t2;
    bool res;
    while(scanf("%lf %lf %lf", &d, &vf, &vg) != EOF){
        res = true;
        if(vf>vg) res = false;
        dg = (double) sqrt(144+d*d);
        t1 = 12/vf;
        t2 = dg/vg;
        if(t1<t2) res = false;
        if(res){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}
