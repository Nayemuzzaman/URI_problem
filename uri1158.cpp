#include<iostream>
#include <stdio.h>

using namespace std;
/**
* Problem No: URI Online Judge Problem 1158
* Solution in C++ language
* Author: Nayemuzzaman
**/

int main()
{
    int N, p, s, a, b, c, d, e;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d %d", &p, &s);
        if(p%2==1)
        {
            c=0;
            for(b=1; b<=s; b++)
            {
                c+=p;
                p+=2;
            }
            printf("%d\n", c);
        }
        else
        {
            p++;
            c=0;
            for(b=1; b<=s; b++)
            {
                c+=p;
                p+=2;
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
