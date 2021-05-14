#include<stdio.h>
#define x 12
int main(){
	int M[x][x],i,j,soma=0,count=0;
	float media=0;
	char op;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			M[i][j] = 1 + rand() % 100;
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
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
				if(i<j){
					soma = soma + M[i][j];
				}	
			}
		}
		printf("A soma eh: %d",soma);
	}
	else if(op=='M' || op=='m'){
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
				if(i<j){
					soma = soma + M[i][j];
					count++;
				}	
			}
		}
		media=soma/count;
		printf("A media eh: %.1f",media);
	}else{
		printf("Opcao invalida");
	}
	return 0;
}
