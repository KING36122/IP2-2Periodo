#include<stdio.h>
#include<math.h>

float potencia(float a, int b){
	float potencia;
	potencia = pow(a,b);
	return potencia;
}

int main(){
	float base,a;
	int expoente;
	printf("Digite a base: ");
	scanf("%f",&base);
	printf("Digite o expoente: ");
	scanf("%i",&expoente);
	if(expoente>=1){
		a = potencia(base,expoente);
		printf("[%.2f]",a);
	}else{
		printf("Expoente menor que 1");
	}
	return 0;
}
