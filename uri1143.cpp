#include<iostream>
#include<stdio.h>

using namespace std;
/**
* Problem No: URI Online Judge Problem 1143
* Solution in C++ language
* Author: Nayemuzzaman
**/
int main()
{
    int n,i;
    int x,j,y;
    scanf("%d",&n);

    for(i=1;i<=n;i++){

     x = i*i;
     y = i*i*i;

    printf("%d %d %d\n",i,x,y);
    }

    return 0;
}
