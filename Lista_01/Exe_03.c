#include <stdio.h>
#include <math.h>
#define PI 3.14159


int main(){

    float r, volume, area;


    printf("+--------------------------------------------------------------------+\n");
    printf("|            Iremos calcular area e volume de uma esfera.            |\n");
    printf("+--------------------------------------------------------------------+\n");

    
    printf("Informe o valor do raio:\n");
    scanf("%f",&r);
    
    volume = (  (4.0/3) * PI * pow(r,3)  );
    area = 4 * PI * pow(r,2);
    
    printf("+--------------------------------------------------------------------+\n");
    printf("| Area: %.2f\n",area);
    printf("| Volume: %.2f\n",volume);
    printf("+--------------------------------------------------------------------+\n");
    
    
    return 0;
}