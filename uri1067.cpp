#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i;
    scanf("%d",&i);
    if(i>0){
        for(int j=1;j<=i;j++){
            if(j%2==1){
                printf("%d\n",j);
            }
        }
    }
}
