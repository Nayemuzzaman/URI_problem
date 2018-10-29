#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1165
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main()
{
    int n,p,c=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&p);
        if(p==1||p==2){
            printf("%d eh primo\n",p);
        }else if(p>2){
            for(int j=2;j<p;j++){
                if(p%j==0){
                    c=2;
                    break;
                }else{
                    c=1;
                }
            }
            if(c==2)
                printf("%d nao eh primo\n",p);
            else if(c==1)
                printf("%d eh primo\n",p);
        }
    }
}
