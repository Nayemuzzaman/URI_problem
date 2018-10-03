#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a,b,com,value;

    while(true){
            if(n==0)
                break;
        scanf("%d %d",&a,&b);
        if(a>b){
            com = a;
            a=b;
            b=com;
        }

        value=0;
        for(int i=a+1;i<b;i++){
            if(i%2 != 0){
                value += i;
            }
        }
        printf("%d\n",value);

        n--;
    }
    return 0;

}
