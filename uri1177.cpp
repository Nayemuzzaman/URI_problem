#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1177
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
    int n,j=0;
    scanf("%d",&n);

    for(int i=0;i<1000;i++){
        if(j<n){
            printf("N[%d] = %d\n",i,j);
            j++;
        }else{
            j=0;
            printf("N[%d] = %d\n",i,j);
            j++;
        }
    }
}
