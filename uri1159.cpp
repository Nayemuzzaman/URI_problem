#include<iostream>
#include<stdio.h>


/**
* Problem No: URI Online Judge Problem 1159
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
    int X,count=0,p;

    while(true)
    {
        scanf("%d",&X);
        p=0;
        if(X==0){
            break;
        }else if(X%2==0){
           for(int i=X;i<=X+8;i+=2)
             p+=i;
        }else if(X%2!=0){
           for(int i=X+1;i<=X+9;i+=2)
             p+=i;
        }
        printf("%d\n",p);
    }
}
