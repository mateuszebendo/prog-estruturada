#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distancia (int, int, int, int);

void main (){

    int xa, xb, ya, yb;
    int r;
    printf("Digite o valor de Xa: ");
    scanf("%d", &xa);
    printf("Digite o valor de Xb: ");
    scanf("%d", &xb);
    printf("Digite o valor de Ya: ");
    scanf("%d", &ya);
    printf("Digite o valor de Yb: ");
    scanf("%d", &yb);
    r = distancia(xa,xb, ya, yb);
    printf("A distância entre esses dois pontos é: %d", r);
    getchar();

}

int distancia (int xa, int xb, int ya, int yb){

    int r1, r2, r3, r4;
    r1 = pow(xa-xb, 2);
    r2 = pow(ya-yb, 2);
    r3 = r1 + r2;
    r4 = sqrt(r3);


}
