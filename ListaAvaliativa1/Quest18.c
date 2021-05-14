#include<stdio.h>
#define x 12
int main(){
	int M[x][x],i,j,num=0,soma=0;
	float media=0;
	char op;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			M[i][j] = rand() % 100;
		}
	}
	printf("\nMatriz M:\n");
	for(i=0;i<x;i++){
		printf("|\t");
		for(j=0;j<x;j++){
			printf("%d\t",M[i][j]);
		}
		printf("|\n");
	}
	printf("\n\nDigite S para soma ou M para media: ");
	scanf("%s",&op);
	if(op=='S' || op=='s'){
		printf("\n\nEscolha uma coluna: ");
		scanf("%d",&num);
		for(i=0;i<x;i++){
			soma = soma + M[i][num];
		}
		printf("A soma eh: %d",soma);
	}else if(op=='M' || op=='m'){
		printf("\n\nEscolha uma coluna: ");
		scanf("%d",&num);
		for(i=0;i<x;i++){
			media = media + M[i][num];
		}
		printf("A media eh: %.2f",media/x);
	}else{
		printf("Opcao invalida!");
	}
	return 0;
}
