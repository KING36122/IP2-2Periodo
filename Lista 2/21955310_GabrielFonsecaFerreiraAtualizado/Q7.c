#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct livro{
	char titulo[30];
	char autor[15];
	int ano;
}Livro;

void preenche(Livro l[],int x){
	int i;
	for(i=0;i<x;i++){
		printf("Titulo do livro n%d: ",i+1);
		scanf("%[^\n]s",l[i].titulo);
		setbuf(stdin,NULL);
		printf("Autor do livro n%d: ",i+1);
		scanf("%[^\n]s",l[i].autor);
		setbuf(stdin,NULL);
		printf("Ano do livro n%d: ",i+1);
		scanf("%d",&l[i].ano);
		setbuf(stdin,NULL);
	}
}

void encontra(Livro l[],int x){
	int i;
	char busca[15];
	printf("Digite o titulo para busca: ");
	scanf("%[^\n]s",busca);
	setbuf(stdin,NULL);
	for(i=0;i<x;i++){
		if(strncmp(busca,l[i].titulo,30)==0){
			printf("\n\nTitulo: %s, Autor: %s, ano: %d",l[i].titulo,l[i].autor,l[i].ano);
		}
	}
}

int main(){
	int x=5;
	Livro l[x];
	preenche(l,x);
	encontra(l,x);
	return 0;
}
