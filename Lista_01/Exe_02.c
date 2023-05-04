#include<stdio.h>
#include<math.h>

int main(){


    float x1,y1,x2,y2, distancia;

    printf("+--------------------------------------------------------------------+\n");
    printf("|          Iremos calcular a distancia de um ponto ate outro.        |\n");
    printf("+--------------------------------------------------------------------+\n");
    
    
    printf("Informe as coordenadas de X e Y , na respectiva ordem, para P1:\n");
    scanf("%f%f",&x1,&y1);
    
    printf("Informe as coordenadas de X e Y , na respectiva ordem, para P2:\n");
    scanf("%f%f",&x2,&y2);
    
    distancia = sqrt(  pow((x2 - x1), 2) + pow((y2 - y1), 2)   );
    
    printf("+--------------------------------------------------------------------+\n");
    printf("| P1 = (%.4f,%.4f)\n",x1,y1);
    printf("| P2 = (%.4f,%.4f)\n",x2,y2);
    printf("| A distancia entre P2 e P1 eh: %.4f\n", distancia);
    printf("+--------------------------------------------------------------------+\n");
    return 0;
}

/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no 
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais 
após a vírgula
*/