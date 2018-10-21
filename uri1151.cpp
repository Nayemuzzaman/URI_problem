#include<iostream>
#include<stdio.h>
/**
* Problem No: URI Online Judge Problem 1151
* Solution in C++ language
* Author: Nayemuzzaman
**/

using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int arr[n],j=0;

    for(int i=0;i<n;i++)
    {
        arr[i]=j;
        if(j==0){
            j++;
        }else{
            j=arr[i-1]+j;
        }

    }
    for(int k=0;k<n;k++){
        if(k<n-1){
           printf("%d ",arr[k]);
        }else{
            printf("%d",arr[k]);
        }
    }
    printf("\n");
    return 0;
}
