#include <stdio.h>
#include <stdlib.h>

int main(){

    float x,y;
    char refazer;

    do{
        system("cls");

        printf("Informe as coordenadas, respectivamente, X e Y do ponto:\n");
        scanf("%f%f",&x,&y);

        if(x>0 && y>0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f                                                 |\n",x);
            printf("| Y=%.1f                                                 |\n",y);
            printf("| O ponto pertence ao Q1(quadrante um)                   |\n");              
            printf("+--------------------------------------------------------+\n");
        }
        
        if(x<0 && y>0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f                                                 |\n",x);
            printf("| Y=%.1f                                                 |\n",y);
            printf("| O ponto pertence ao Q2(quadrante dois)                 |\n");
            printf("+--------------------------------------------------------+\n");
        }

        if(x<0 && y<0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f\n",x);
            printf("| Y=%.1f\n",y);
            printf("| O ponto pertence ao Q3(quadrante tres)                 |\n");
            printf("+--------------------------------------------------------+\n");
        }

        if(x>0 && y<0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f\n",x);
            printf("| Y=%.1f\n",y);
            printf("| O ponto pertence ao Q4(quadrante quatro)               |\n");
            printf("+--------------------------------------------------------+\n");
        }

        if(x==0 && y==0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f\n",x);
            printf("| Y=%.1f\n",y);
            printf("| ORIGEM                                                 |\n");
            printf("+--------------------------------------------------------+\n");
        }

        if(x==0 && y!=0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f\n",x);
            printf("| Y=%.1f\n",y);
            printf("| Eixo Y                                                 |\n");
            printf("+--------------------------------------------------------+\n");
        }

        if(y==0 && x!=0){
            printf("+------------------- RESULTADO --------------------------+\n");
            printf("| X=%.1f\n",x);
            printf("| Y=%.1f\n",y);
            printf("| Eixo X                                                 |\n");
            printf("+--------------------------------------------------------+\n");
        }

        printf("Deseja refazer o problema (S/N): ");
        scanf(" %c",&refazer);

    }while(refazer=='s' || refazer=='S');
    return 0;
}