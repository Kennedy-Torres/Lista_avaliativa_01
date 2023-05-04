#include <stdio.h>

int main(){

    int i,soma=0;

    printf("+-------------------------------------------+\n");
    printf("|     Multiplos de 3 ou 5 ate 1000          |\n");
    printf("+-------------------------------------------+\n");



    for(i=0;i<1000;i++){
        if(i%3 == 0 || i%5 == 0 ){
            soma = soma +i;
        }
    }

    printf("| Soma total:  \n");
    printf("| %d\n",soma);
    printf("+-------------------------------------------+\n");

    return 0;
}

/*
Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 
que são múltiplos de 3 ou 5
*/