#include <stdio.h>

int main()
{

    int i, DIFERENCA = 0, valor[4];
    int retorno = -1;
    char refaz, letra, delta[] = {'A', 'B', 'C', 'D'};

    do
    {

        printf("+---- Temos a seguinte expressao: ----+\n");
        printf("|           (A*B) - (C*D)             |\n");
        printf("+-------------------------------------+\n");

        for (i = 0; i < 4; i++)
        {
            do{
                    
                printf("| Informe um valor para %c:", delta[i]);
                retorno = scanf("%d", &valor[i]);

                if (retorno == 0)
                {
                    printf("|     Isto nao e um numero          |\n");
                    printf("+-----------------------------------+\n");
                }

                do
                {
                    letra = getchar();
                } while (letra != '\n'); // limpar o buffer do teclado para impedir o looping infinito

            }while(retorno == 0);
        }

        DIFERENCA = (valor[0] * valor[1]) - (valor[2] * valor[3]);

        printf("+-------------------------------------+\n");
        printf("|           (%d*%d) - (%d*%d)            |\n", valor[0], valor[1], valor[2], valor[3]);
        printf("|        Valor da DIFERENCA = %d       |\n", DIFERENCA);
        printf("+-------------------------------------+\n");

        printf("Deseja refazer a operacao (S/N): ");
        scanf(" %c", &refaz);

    } while (refaz == 's' || refaz == 'S');

    return 0;
}