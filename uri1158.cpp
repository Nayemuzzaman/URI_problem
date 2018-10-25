#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1158
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
     int X,Y,p,t,count=0;
     scanf("%d",&p);

     while(true){

     if(count==p){
        break;
     }

         scanf("%d %d",&X,&Y);

         if(X%2==0){
                X++;
                t=0;
             for(int i=1;i<=Y;i++){
                t+=X;
                X+=2;
             }
           printf("%d\n",t);
         }else{
             t=0;
            for(int i=1;i<=Y;i++){
                t+=X;
                X+=2;
             }
            printf("%d\n",t);
         }


          count++;
     }

    return 0;
}
