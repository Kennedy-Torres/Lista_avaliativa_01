#include <stdio.h>

int main(){

    int i,num[10],retorno=-1,soma=0;
    float media;
    char letra;

    printf("+---------------------------------------------+\n");
    printf("| Iremos fazer a media de 10 numeros inteiros |\n");
    printf("+---------------------------------------------+\n");


    
    for(i=0;i<10;i++){

        do{    
            printf("| Informe um valor para N%d:                   |\n| ",i+1);
            retorno = scanf(" %d",&num[i]);
            soma = soma + num[i];

            if(retorno == 0 ){  
                printf("|            Informe apenas numeros           |\n");
                printf("+---------------------------------------------+\n");
            }

            do{
                letra = getchar();
            }while(letra != '\n');
            
        }while(retorno == 0);
    
    }
    


    media = soma/10.0; 

    printf("+---------------------------------------------+\n");
    printf("| Media final = %.2f                          |\n", media);
    printf("+---------------------------------------------+\n");
    return 0;
}