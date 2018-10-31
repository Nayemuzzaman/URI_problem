#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1173
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
    int n,count=0;

    scanf("%d",&n);
    int N[10];

    for(int i=0;i<10;i++){
         N[i] = n;
        printf("N[%d] = %d\n",i,n);
        n*=2;
    }
    return 0;
}
