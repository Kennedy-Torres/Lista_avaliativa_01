#include <stdio.h>

int main(){

    int i,num=0;
    char volta;

    do{
        
        printf("+--------------------------------------+\n");
        printf("|     Encontrando seus divisores       |\n");
        printf("+--------------------------------------+\n");

        printf("| Informe um numero positivo:          |\n| ");
        scanf("%d",&num);
        printf("+--------------------------------------+\n");

        printf("  Divisores de %d:\n",num);

        for(i=1;i<num+1;i++){
            if(num%i == 0){
                printf("  %d ",i);
            }
        }

        printf("\n+--------------------------------------+\n");

        printf("Deseja voltar ao inicio (S/N): ");
        scanf(" %c",&volta);
    }while(volta =='s' || volta == 'S');    

    return 0;
}

//Faça um algoritmo que leia um número positivo e imprima seus divisores.