#include<stdio.h>
#define x 2
typedef struct endereco{
	char rua[30];
	int num;
}Endereco;

typedef struct pessoa{
	char nome[30];
	int idade;
	Endereco end;
}Pessoa;

int main(){	
	Pessoa p[x];
	int i;
	for(i=0;i<x;i++){
		printf("Nome: ");
		scanf("%s",p[i].nome);
		printf("Idade: ");
		scanf("%d",&p[i].idade);
		printf("Rua: ");
		scanf("%s",p[i].end.rua);
		printf("Numero: ");
		scanf("%d",&p[i].end.num);
	}
	for(i=0;i<x;i++){
		printf("\n\n%s de idade %d mora na rua %s de numero %d",p[i].nome,p[i].idade,p[i].end.rua,p[i].end.num);
	}
	return 0;
}
