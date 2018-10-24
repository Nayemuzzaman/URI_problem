#include<iostream>
#include<stdio.h>
/**
* Problem No: URI Online Judge Problem 1155
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main(){
    double s=0,p;

    for(double i=1;i<=100;i++){
        p=(1/i);
        s+=p;
    }

    printf("%.2lf\n",s);
}
