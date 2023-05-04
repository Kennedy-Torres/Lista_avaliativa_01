#include <stdio.h>
#include <stdlib.h>

// NAO USAR FUNCAO E VETORES


int main(){

    char menu,continuar;
    
    do{
        int produto,qtd_abc=0,qtd_m=0,qtd_pe=0,val_final;
        system("cls");

        do{

            printf("+-------------------------------------------+\n");
            printf("|                Mercadinho                 |\n");
            printf("+-------------------------------------------+\n");
            printf("| Frutas disponiveis:                       |\n");
            printf("| (1)ABACAXI - R$5,00 a unidade             |\n");
            printf("| (2)MACA    - R$1,00 a unidade             |\n");
            printf("| (3)PERA    - R$4,00 a unidade             |\n");
            printf("+-------------------------------------------+\n");



                printf("O QUE DESEJA COMPRAR (1/2/3)?\n");
                scanf("%d",&produto);

                switch (produto)
                {
                case 1:
                    printf("Informe a quantidade de ABACAXI:");
                    scanf("%d",&qtd_abc);
                    break;
                
                case 2:
                    printf("Informe a quantidade de MACA:");
                    scanf("%d",&qtd_m);
                    break;

                case 3:
                    printf("Informe a quantidade de PERA:");
                    scanf("%d",&qtd_pe);
                    break;
                default:
                    printf("Nao temos essa opcao\n");
                    break;
                }

            printf("\nDeseja retornar ao menu p/comprar\nmais alguma coisa?(S/N): ");
            scanf(" %c",&menu);

        }while(menu =='S' || menu=='s');

        printf("\n+-------------------------------------------+\n");
        printf("|           Resumo da compra                |\n");
        printf("+-------------------------------------------+\n");
        printf("| Item\t    Unidade\tPreco               |\n");
        if(qtd_abc!=0){
            printf("| ABACAXI\t%d    \tR$%d\n",qtd_abc,qtd_abc*5);  
        }
        if(qtd_m!=0){
            printf("| MACA\t        %d   \tR$%d\n",qtd_m,qtd_m);    
        }
        if(qtd_pe!=0){
            printf("| PERA\t        %d   \tR$%d\n",qtd_pe,qtd_pe*4);    
        }
        val_final = qtd_abc*5 + qtd_m + qtd_pe*4;
        printf("|                       Total               |\n");
        printf("|                       R$%d                 \n",val_final);
        printf("+-------------------------------------------+\n");

        printf("\nDeseja realizar uma nova compra (S/N)?");
        scanf(" %c",&continuar);

    }while(continuar =='s' || continuar=='S');

    return 0;
}