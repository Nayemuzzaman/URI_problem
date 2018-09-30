#include<stdio.h>
#include<iostream>

/**
* Problem No: URI Online Judge Problem 1095
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main(){
    int i=1,j;

    for(j=60;j>=0;j-=5){
       printf("I=%d J=%d\n",i,j);
       i+=3;
    }

    return 0;
}
