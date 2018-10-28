#include<iostream>
#include<stdio.h>

/**
* Problem No: URI Online Judge Problem 1160
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main()
{
    int n;
    int a,b,count=0;
    double p,s;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        count=0;
        scanf("%d %d %lf %lf",&a,&b,&p,&s);
        while(a<=b){
            a *= (p/100.0) +1;
            b *= (s/100.0) +1;
            count++;

            if(count > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(count<= 100)
            printf("%d anos.\n", count);
    }
    return 0;
}
