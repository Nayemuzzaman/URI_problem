
#include<iostream>
#include<stdio.h>

using namespace std;
/**
* Problem No: URI Online Judge Problem 1144
* Solution in C++ language
* Author: Nayemuzzaman
**/
int main()
{
    int i,n;
    int x, y, z;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        x= i*i;
        y=i*i*i;
        printf("%d %d %d\n",i,x,y);
        printf("%d %d %d\n",i,x+1,y+1);
    }
    return 0;
}
