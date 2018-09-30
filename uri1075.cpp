#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1075
* Solution in C++ language
* Author: Nayemuzzaman
**/



using namespace std;

int main(){
    int i;
    scanf("%d",&i);
    for(int j=0;j<10000;j++){
        if(j%i==2){
            printf("%d\n",j);
        }
    }
    return 0;
}
