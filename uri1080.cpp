#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1080
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main(){
    int arr[100];
    int out[1]={0};
    int i=0,k=0,j;
    for( j=0; j<100;j++){

        scanf("%d",&arr[j]);
        if(arr[j]>out[1]){
            out[1]=arr[j];
            k=j+1;
        }


    }
    printf("%d\n%d\n",out[1],k);
}
