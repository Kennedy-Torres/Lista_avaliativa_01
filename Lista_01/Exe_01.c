#include <stdio.h>
#include <stdlib.h>
// PROIBIDO O USO DE VETOR E FUNCAO

int main(){
    char refaz;
    char A,B,C,D;
    int a=0,b=0,c=0,d=0,DIFERENCA=0;

    do{
        system("cls");
        
        printf("+-------------------------------------+\n");
        printf("|     Temos a seguinte expressao:     |\n");
        printf("|           (A*B) - (C*D)             |\n");
        printf("+-------------------------------------+\n");

        printf("Informe um valor para A,B,C e D, na respectiva ordem:\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        DIFERENCA = (a*b) - (c*d);

        printf("+-------------------------------------+\n");
        printf("|           (%d*%d) - (%d*%d)            |\n", a,b,c,d);
        printf("|        Valor da DIFERENCA = %d       |\n",DIFERENCA);
        printf("+-------------------------------------+\n");

        printf("Deseja refazer o processo (S/N): ");
        scanf(" %c",&refaz);

    }while(refaz =='S' || refaz =='s');
    return 0;
}

//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do 
//produto de A e B pelo produto de C e D