#include<iostream>
#include<stdio.h>
/**
* Problem No: URI Online Judge Problem 1079
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main(){
    float t,p,k,in,res,aveg;
  int i;
    scanf("%d",&i);
    for(int j=1;j<=i;j++){
        scanf("%f %f %f",&t,&p,&k);
        res = t*2.0+p*3.0+k*5.0;
        aveg = res/10.0;
        printf("%.1f\n",aveg);
    }
}
