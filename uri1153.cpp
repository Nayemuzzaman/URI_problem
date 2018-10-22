#include<iostream>
#include<stdio.h>
/**
* Problem No: URI Online Judge Problem 1153
* Solution in C++ language
* Author: Nayemuzzaman
**/
int main()
{
    int n,p=1,d=6;
    scanf("%d",&n);
    int s[n];
    for(int i=1;i<n;i++){
        s[i]=(n-i);

    }
    for(int j=1;j<n;j++){
        p=s[j]*p;
    }
    printf("%d\n",p*n);

    return 0;
}
