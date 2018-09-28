/**
* Problem No: URI Online Judge Problem 1061
* Solution in C++ language
* Author: Nayemuzzaman
**/

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    char d[4],m[4],h[4],d1[4],m1[4],h1[4];
    int day1,hour1,min1,sec1,day2,hour2,min2,sec2, start, end,output,day,hour,minute,second;
    scanf("%s %d",&d,&day1);
    scanf("%d %s",&hour1,&h);
    scanf("%d %s",&min1,&m);
    scanf("%d",&sec1);

    scanf("%s %d",&d1,&day2);
    scanf("%d %s",&hour2,&h1);
    scanf("%d %s",&min2,&m1);
    scanf("%d ",&sec2);
    start = sec1+ (min1*60)+(hour1 *(60*60))+(day1*(24*60*60));
    end = sec2+ (min2*60)+(hour2 *(60*60))+(day2*(24*60*60));
    output  = end - start;

    day = output / 86400;
    output = output % 86400;
    hour = output / 3600;
    output = output % 3600;
    minute = output / 60;
    second = output % 60;

    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",minute);
    printf("%d segundo(s)\n",second );

    return 0;
}
