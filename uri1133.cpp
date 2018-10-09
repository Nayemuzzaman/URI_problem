#include<iostream>
#include<stdio.h>

using namespace std;

/**
* Problem No: URI Online Judge Problem 1133
* Solution in C++ language
* Author: Nayemuzzaman
**/

int main(){
    int x,y;

    scanf("%d %d",&x,&y);

    if(x<y){
        for(int i=x+1;i<=y;i++){
            if(i%5==2||i%5==3){
                printf("%d\n",i);

            }
        }
    }else if(x>y){
        for(int i=y+1;i<=x;i++){
            if(i%5==2 || i%5==3){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

