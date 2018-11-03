#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
   long long int n, f = 0, t = 1, temp, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++, f = 0, t = 1)
   {
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) temp = c;
          else
          {
             temp = f + t;
             f = t;
             t = temp;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,temp);
   }
   return 0;
}
