#include <stdio.h>
#define TAM 1000

int main(){

    int num=0;
    int maior=-11111, menor=11111;
    
    do{

        printf("Informe um numero inteiro:");
        scanf("%d",&num);


        if(maior<num){
            maior = num;
        }

        if(menor>num){
            menor = num;
        }

    }while(num>-1);

    printf("Maior= %d\n",maior);
    printf("Menor= %d",menor);
    return 0;
}


/*
Elabore um programa que faça a leitura de vários números inteiros até que se digite 
um número negativo. O programa tem de retornar o maior e o menor número lido
*/