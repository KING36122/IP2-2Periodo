#include<stdio.h>
#include<stdlib.h>
int x=5;

typedef struct aluno{
	char nome[30];
	int matricula;
	char curso[30];	
}Aluno;

void preenche(Aluno a[]){
	int i;
	for(i=0;i<x;i++){
		printf("Nome do aluno %d: ",i+1);
		scanf("%[^\n]s",a[i].nome);
		setbuf(stdin,NULL);
		printf("Matricula do aluno %d: ",i+1);
		scanf("%d",&a[i].matricula);
		setbuf(stdin,NULL);
		printf("Nome do curso do aluno %d: ",i+1);
		scanf("%[^\n]s",a[i].curso);
		setbuf(stdin,NULL);
	}
}

void mostra(Aluno a[]){
	int i;
	for(i=0;i<x;i++){
		printf("\nNome aluno %d: %s, matricula: %d, curso: %s",i+1,a[i].nome,a[i].matricula,a[i].curso);
	}
}

int main(){
	Aluno a[x];
	preenche(a);
	mostra(a);
	return 0;
}
