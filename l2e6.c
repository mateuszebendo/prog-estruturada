#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distancia (int, int, int, int);

void main (){

    int xa, xb, ya, yb;
    int r;
    printf("Digite o valor de Xa: ");
    scanf("%d", xa);
    printf("Digite o valor de Xb: ");
    scanf("%d", xb);
    printf("Digite o valor de Ya: ");
    scanf("%d", ya);
    printf("Digite o valor de Yb: ");
    scanf("%d", yb);
    r = distancia(xa,xb, ya, yb);
    printf("A distância entre esses dois pontos é: %d", r);
    getchar();

}

int distancia (int xa, int xb, int ya, int yb){

}
