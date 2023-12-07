#include <math.h>

float distancia (TPonto p){
	float r1;
	r1 = (p.x * p.x) + (p.y * p.y);
	return (sqrt(r1));
}