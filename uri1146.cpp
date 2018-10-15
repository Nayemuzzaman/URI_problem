#include<iostream>
#include<stdio.h>

using namespace std;
/**
* Problem No: URI Online Judge Problem 1146
* Solution in C++ language
* Author: Nayemuzzaman
**/
int main()
{
    int x,i;


    while(true){
            scanf("%d",&x);
        if(x==0){
            break;
        }else{
            for(i=1;i<x;i++){
                printf("%d ",i);
            }
            printf("%d\n",x);
        }
    }
    return 0;

}
