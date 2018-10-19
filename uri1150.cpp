#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1150
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
        int x,z,b=0,c=0;

        scanf("%d",&x);

        do{
            scanf("%d",&z);
        }while(x>=z);


        for( int a=x; b<z; a++)
        {
            b+=a;
            c++;
        }
        printf("%d\n",c);

}
