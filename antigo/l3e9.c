#include <stdio.h>
#include <stdlib.h>

void main (){

    int xi, xf, yi,yf;
    int r1, r2;

    printf("Digite o X inicial: ");
    scanf("%d", &xi);
    printf("Digite o X final: ");
    scanf("%d", &xf);
    printf("Digite o Y inicial: ");
    scanf("%d", &yi);
    printf("Digite o Y inicial: ");
    scanf("%d", &yf);
    PontoM(xi, xf, yi, yf, &r1, &r2);
    printf("O ponto médio é %d, %d", r1, r2 );
    getchar();


}

void PontoM (int xi, int xf, int yi, int yf, int *r1, int *r2){

    *r1 = (xi+xf)/2;
    *r2 = (yi+yf)/2;

}
