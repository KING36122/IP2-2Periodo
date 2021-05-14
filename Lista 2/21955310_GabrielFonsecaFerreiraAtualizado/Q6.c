#include<stdio.h>
#include<stdlib.h>

typedef struct carro{
	char marca[15];
	int ano;
	float preco;
}Carro;

void preenche(Carro car[],int x){
	int i;
	for(i=0;i<x;i++){
		printf("Marca do carro %d: ",i+1);
		scanf("%[^\n]s",car[i].marca);
		setbuf(stdin,NULL);
		printf("Ano do carro %d: ",i+1);
		scanf("%d",&car[i].ano);
		setbuf(stdin,NULL);
		printf("Preco do carro %d: ",i+1);
		scanf("%f",&car[i].preco);
		setbuf(stdin,NULL);
	}
}

void valor(Carro car[],int x){
	float p=1;
	int i;
	while(p!=0 && p>0){
		printf("\n\nDigite um preco: R$");
		scanf("%f",&p);
		setbuf(stdin,NULL);
		if(p==0){
			break;
		}
		for(i=0;i<x;i++){
			if(car[i].preco<p){
				printf("\nCarro de marca %s, ano %d com preco R$%.2f",car[i].marca,car[i].ano,car[i].preco);
			}
		}
	}
}

int main(){
	int x=5;
	Carro car[x];
	preenche(car,x);
	valor(car,x);
	return 0;
}
