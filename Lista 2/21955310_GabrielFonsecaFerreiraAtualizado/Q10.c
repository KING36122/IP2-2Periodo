#include<stdio.h>
#include<stdlib.h>
int x=0,max=100,i=0,b=1;

typedef struct professor{
	char nome[30];
	long int cpf;
}Professor;

typedef struct disciplina{
	int codigo;
	char nome[20];
	Professor prof;
}Disciplina;

typedef struct aluno{
	int matricula;
	char nome[30];
	Disciplina disc;
}Aluno;

int continuar(){
	int a;
	printf("Deseja continuar? 1 para sim, 2 para nao: ");
	scanf("%d",&a);
	fflush(stdin);
	return a;
}

void preenche(Aluno a[]){
	setbuf(stdin,NULL);
	printf("[%d] Nome do(a) aluno(a): ",i+1);
	scanf("%[^\n]s",a[i].nome);
	setbuf(stdin,NULL);
	printf("[%d] Matricula do(a) aluno(a): ",i+1);
	scanf("%d",&a[i].matricula);
	setbuf(stdin,NULL);
	printf("[%d] Nome da disciplina: ",i+1);
	scanf("%[^\n]s",a[i].disc.nome);
	setbuf(stdin,NULL);
	printf("[%d] Codigo da disciplina: ",i+1);
	scanf("%d",&a[i].disc.codigo);
	setbuf(stdin,NULL);
	printf("[%d] Nome do(a) professor(a): ",i+1);
	scanf("%[^\n]s",a[i].disc.prof.nome);
	setbuf(stdin,NULL);
	printf("[%d] CPF do(a) professor(a): ",i+1);
	scanf("%ld",&a[i].disc.prof.cpf);
	setbuf(stdin,NULL);
	x++;
	i++;
}

void mostrar(Aluno a[]){
	int i;
	printf("\n");
	for(i=0;i<x;i++){
		printf("\n[%d] Aluno(a): %s, matricula: %d",i+1,a[i].nome,a[i].matricula);
		printf("\nDisciplina: %s, codigo: %d",a[i].disc.nome,a[i].disc.codigo);
		printf("\nProfessor(a): %s, CPF: %ld",a[i].disc.prof.nome,a[i].disc.prof.cpf);
	}
}

int main(){
	Aluno a[x];
	while(b==1){
	    preenche(a);
	    b = continuar();
	    if(b!=1){
	        mostrar(a);
	        break;
	    }
	}
	return 0;
}
