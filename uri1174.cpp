#include<iostream>
#include<stdio.h>
/**
* Problem No: URI Online Judge Problem 1174
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main()
{
    int n;
    double A[100];

    for(int j=0;j<100;j++){
        scanf("%lf",&A[j]);
    }
    for(int i=0;i<100;i++){

        if(A[i]<=10.0){
        printf("A[%d] = %.1lf\n",i,A[i]);
        }
    }
}
