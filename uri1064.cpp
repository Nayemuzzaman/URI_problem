#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1064
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main(){
    float value1,average;
    int count = 0;

    for(int start=0; start<6;start++){

         scanf("%f", &value1);
         if(value1>=1){
            count++;
            average += value1;

         }

    }
    average=average/count;

    printf("%d valores positivos\n", count);
    printf("%.1f\n",average);
}
