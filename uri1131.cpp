#include<iostream>
#include<stdio.h>
/*
    Nayemuzzaman
    problem: uri 1131
*/
int main(){
        int inPutOne,inputTwo,inner=0,gremio=0, empates=0,taken,grenais=0;

        while(1){

            scanf("%d %d", &inPutOne, &inputTwo);
            if(inPutOne>inputTwo){
                inner++;
            }else if(inPutOne<inputTwo){
                gremio++;
            }else if(inPutOne==inputTwo){
                empates++;
            }
            grenais++;


            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&taken);
            if(taken == 1){
                continue;
            }else if(taken==2){
                break;
            }
        }
        printf("%d grenais\n",grenais);
        printf("Inter:%d\n",inner);
        printf("Gremio:%d\n",gremio);
        printf("Empates:%d\n",empates);

        if(inner > gremio){
            printf("Inter venceu mais\n");
        }else if(inner < gremio){
            printf("Gremio venceu mais\n");
        }else if(inner == gremio){
            printf("Nao houve vencedor\n");
        }

    return 0;
}
