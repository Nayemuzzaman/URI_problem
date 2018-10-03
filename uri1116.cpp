
#include<iostream>
#include<stdio.h>


int main(){
    int a,b,c;
    int n;

    scanf("%d",&n);


    for(int i = 0; i < n; i++){

        scanf("%d %d",&a,&b);

          if(n==0){
                break;
          }
        else {
            if(b==0){
                printf("divisao impossivel\n");
            }else{
                printf("%0.1f\n",(float)a/(float)b);
            }
        }



    }
    return 0;

}
