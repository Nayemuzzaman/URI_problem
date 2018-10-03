#include<iostream>
#include<stdio.h>

int main(){
    int n,p;


    while(true){
            scanf("%d %d",&n,&p);
        if(n==p){
            break;
        }else if(n>p){
            printf("Decrescente\n");

        }else if(p>n){
            printf("Crescente\n");

        }


    }
     return 0;
}
