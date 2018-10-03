
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a,b,value;

    while(true){
        scanf("%d %d",&a,&b);

       // if(a>b || b>a){
            if(a<=0||b<=0){
                break;
            }else if(a>b){
                value=0;
                for(int i=b;i<=a;i++){
                        value+=i;
                    printf("%d ",i);
                }
                printf("Sum=%d\n", value);

            }else if(b>a){
                value=0;
                for(int i=a;i<=b;i++){
                        value+=i;
                    printf("%d ",i);

                }
                printf("Sum=%d\n",value);
            }
        }

   // }
    return 0;
}
