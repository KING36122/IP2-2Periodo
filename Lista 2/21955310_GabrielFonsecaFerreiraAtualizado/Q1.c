#include<stdio.h>
#include<math.h>

float distancia(float a, float b,float c, float d){
	float distancia;
	distancia = sqrt(pow(b - a,2)+pow(d - c,2));
	return distancia;
}

int main(){
	float x1,x2,y1,y2,a;
	printf("Digite as coordenadas de x1: ");
	scanf("%f",&x1);
	printf("Digite as coordenadas de x2: ");
	scanf("%f",&x2);
	printf("Digite as coordenadas de y1: ");
	scanf("%f",&y1);
	printf("Digite as coordenadas de y2: ");
	scanf("%f",&y2);
	a = distancia(x1,x2,y1,y2);
	printf("[%.2f]",a);
	return 0;
}
