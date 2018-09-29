#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int i,j,count=0;

	for( j= 0; j<5; j++){
		scanf("%d", &i);

		if(i%2==0){
			count+=1;
		}
	}
    printf("%d valores pares\n",count);

	return 0;
}

