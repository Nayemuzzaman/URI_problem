#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1156
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
    double s=0,n,p=1;

    for(double i=1;i<=39;i+=2){
        n = i/p;
        s+=n;
        p*=2;
    }
    printf("%.2lf\n",s);
}
