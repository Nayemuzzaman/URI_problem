
#include <iostream>
#include <stdio.h>

/**
* Problem No: URI Online Judge Problem 1134
* Solution in C++ language
* Author: Nayemuzzaman
**/
using namespace std;

int main() {
	// your code goes here
	int x,al=0, ga=0,de=0;


	while(true){
            	scanf("%d", &x);
		if(x==4){
			break;
		}else if(x==1){
			al++;
		}else if(x==2){
			ga++;
		}else if(x==3){
			de++;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",al);
	printf("Gasolina: %d\n", ga);
	printf("Diesel: %d\n",de);
	return 0;
}
