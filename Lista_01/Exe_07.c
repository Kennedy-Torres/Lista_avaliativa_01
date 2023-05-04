#include <stdio.h>
//#include <stdlib.h>

int main(){

    int nm_termos,n;
    int retorno = -1;
    char letra,continuar;

    do{
        printf("+--------------------------------------------------------+\n");
        printf("|       APLICACAO DA SEQUENCIA DE FIBONACCI              |\n");
        printf("+--------------------------------------------------------+\n");

        do{
            printf("| Informe o termo que deseja encontrar                   |\n");
            printf("| na sequencia de Fibonacci:                             |\n| ");
            retorno = scanf("%d",&nm_termos);

            if(retorno == 0){
                printf("| isto nao eh um numero                                  |\n");
                printf("+--------------------------------------------------------+\n");
            }
            do{
                letra = getchar();
            }while(letra != '\n');

        if(nm_termos < 0){
            printf("| Nao aceita valores negativos                           |\n");
            printf("+--------------------------------------------------------+\n");
        }

        }while(retorno == 0 || nm_termos < 0);

        int a[nm_termos]; // a[0] , a[1], ... , a[n]
        a[0]=0,a[1]=1;

        // raciocinio para a sequencia com o primeiro termo sendo a[0]
        for(n=2;n<nm_termos+1;n++){
            a[n] = a[n-1] + a[n-2]; // ultimo termo eh igual a soma do anterior com o antepenultimo
        }

        printf("+--------------------------------------------------------+\n");
        printf("| O %do Termo dessa sequencia assume:                    |\n",nm_termos);
        printf("|  an=%d                                                 |\n",a[nm_termos]);
        printf("+--------------------------------------------------------+\n");

        printf("| Deseja continuar(S/N): ");
        scanf(" %c",&continuar);
    }while(continuar =='S' || continuar =='s');

    return 0;
}