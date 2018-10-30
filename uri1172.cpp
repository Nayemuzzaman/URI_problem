#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1172
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
    int i=10,n;
    int x[i];

    for(int j=0;j<10;j++){
            scanf("%d",&n);
        if(n>0){
            printf("X[%d] = %d\n",j,n);
        }else{
            printf("X[%d] = 1\n",j);
        }
    }

    return 0;
}
