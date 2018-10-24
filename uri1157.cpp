#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1157
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
    int a,t;
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(a%i==0){
           printf("%d\n",i);
        }

    }
}
