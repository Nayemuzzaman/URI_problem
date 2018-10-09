#include<iostream>
#include<stdio.h>

using namespace std;

/**
* Problem No: URI Online Judge Problem 1132
* Solution in C++ language
* Author: Nayemuzzaman
**/

int main(){
    int x,y,sum=0;

    scanf("%d %d",&x,&y);

    if(x<y)
    {
        for(int i=x;i<=y;i++){
            if(i%13!=0){
                sum+=i;
            }
        }
    }
    else if(x>y){
         for(int i=y;i<=x;i++){
            if(i%13!=0){
                sum+=i;
            }
        }
    }
    printf("%d\n",sum);
}
