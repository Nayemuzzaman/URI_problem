#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1149
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
    int a, n, x=0;
    scanf("%d %d",&a,&n);
    while(n<=0)
    {
        scanf("%d",&n);
    }
    for(int i=1; i<=n;i++)
    {
        x+=a;
        a++;
    }
    printf("%d\n",x);
    return 0;
}
