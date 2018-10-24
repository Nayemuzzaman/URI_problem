#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1154
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main(){
    int n1,n;
     scanf("%d",&n1);
    float count=0,total=0;

    for(int i = 0;i<n1;i++){

         scanf("%d",&n);

        if(n>0){
            total+=n;
            count++;
        }else{

        }

    }
     printf("%.2f\n",total/count);
}
