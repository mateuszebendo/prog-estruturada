#include <stdio.h> 

struct r2 {
 float x;
 float y;
}; 

struct r2 pontoMedio (struct r2 inicial, struct r2 final){
 struct r2 media; 
 media.x = (inicial.x + final.x)/2;
 media.y = (inicial.y + inicial.y)/2;

 return media;
};

int main (){ 

 struct r2 inicial; 
 struct r2 final; 

 puts("Digite o valor inicial para x e y: ");
 scanf("%f %f", &inicial.x, &inicial.y);
 puts("Digite o valor final para x e y: ");
 scanf("%f %f", &final.x, &final.y);

 struct r2 media = pontoMedio(inicial, final);

 printf("Os valores medios sao: \n xm = %f \n Ym = %f \n", media.x, media.y);

 return 0;
};

