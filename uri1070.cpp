#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int i,count=0;
    scanf("%d",&i);

    for(int j= i;count<=5;i++){
        if(i%2==1){
            count++;
            printf("%d\n",i);
        }
    }
}
