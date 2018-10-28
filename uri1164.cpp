#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1164
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main(){
    int p,s,a=1,u;

    scanf("%d",&p);
    int arr;
    for(int i=0;i<p;i++)
    {
        u=0;
        scanf("%d",&s);

            for(a=1;a<s;a++){
                 if(s%a==0){
                    u+=a;
               }
            }
        if(s==u){
            printf("%d eh perfeito\n",s);
        }else{
            printf("%d nao eh perfeito\n",s);
        }
    }
}
