#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>

/**
* Problem No: URI Online Judge Problem 1073
* Solution in C++ language
* Author: Nayemuzzaman
**/

int main(){
    int i;
    scanf("%d",&i);

    for(int j=1; j<=i;j++){
        if(j%2==0){
            int res=pow(j,2);
            printf("%d^2 = %d\n",j,res);
        }
    }
    return 0;
}
