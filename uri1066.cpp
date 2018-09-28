#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1066
* Solution in C++ language
* Author: Nayemuzzaman
**/


using namespace std;

int main(){
    int i, odd=0, even = 0, pos =0, neg = 0;
    int n;
    for(i=1; i<=5; i++){
        scanf("%d", &n);

      if(n > 0){
        pos++;
      }else{
       if(n != 0){
         neg++;
       }
      }

      if(n % 2 == 0){
       even++;
      }else{
       odd++;
      }
    }

     printf("%d valor(es) par(es)\n",even);
     printf("%d valor(es) impar(es)\n",odd);
     printf("%d valor(es) positivo(s)\n",pos);
     printf("%d valor(es) negativo(s)\n",neg);

     return 0;
}
