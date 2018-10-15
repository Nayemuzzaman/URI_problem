
#include<stdio.h>
#include<iostream>

using namespace std;
/**
* Problem No: URI Online Judge Problem 1145
* Solution in C++ language
* Author: Nayemuzzaman
**/
int main()
{
    int i,n,t,b=0;


    scanf("%d %d",&t,&n);

    for(i=1;i<=n;i++)
    {
       b++;
       if(b==t)
            printf("%d",i);
       else printf("%d ",i);
       if(b==t)
       {
           b=0;
           printf("\n");
       }
    }
}

