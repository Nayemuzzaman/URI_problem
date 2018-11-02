#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1175
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
    int n[20],p,i,j;

    for(i=0;i<20;i++){
        scanf("%d",&n[i]);
    }

    for(i=0,j=19;i<10;i++,j--){
        p=n[i];
        n[i]=n[j];
        n[j]=p;
    }

    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }


}
