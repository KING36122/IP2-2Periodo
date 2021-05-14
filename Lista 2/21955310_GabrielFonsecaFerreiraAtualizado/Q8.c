#include<stdio.h>
#include<stdlib.h>
int x=0,max=100,i=0,a=1;

typedef struct endereco{
	char logradouro[15];
	int num;
	char bairro[15];
	long int cep;
}Endereco;

typedef struct cliente{
	int matricula;
	char nome[30];
	Endereco end;
}Cliente;

int continuar(){
	int a;
	printf("Deseja continuar? 1 para sim, 2 para nao: ");
	scanf("%d",&a);
	return a;
}

void preenche(Cliente c[]){
	setbuf(stdin,NULL);
	printf("[%d] Digite a matricula: ",i+1);
	scanf("%d",&c[i].matricula);
	setbuf(stdin,NULL);
	printf("[%d] Digite o nome: ",i+1);
	scanf("%[^\n]s",c[i].nome);
	setbuf(stdin,NULL);
	printf("[%d] Digite o nome da rua: ",i+1);
	scanf("%[^\n]s",c[i].end.logradouro);
	setbuf(stdin,NULL);
	printf("[%d] Digite o numero da casa: ",i+1);
	scanf("%d",&c[i].end.num);
	setbuf(stdin,NULL);
	printf("[%d] Digite o nome do bairro: ",i+1);
	scanf("%[^\n]s",c[i].end.bairro);
	setbuf(stdin,NULL);
	printf("[%d] Digite o cep (apenas numeros): ",i+1);
	scanf("%ld",&c[i].end.cep);
	x++;
	i++;
}

void mostrar(Cliente c[]){
	int i;
	printf("\n");
	for(i=0;i<x;i++){
		printf("\n[%d] Matricula: %d, Nome: %s",i+1,c[i].matricula,c[i].nome);
		printf("\nEndereco - Logradouro: %s, Numero: %d, Bairro: %s, CEP: %ld",c[i].end.logradouro,c[i].end.num,c[i].end.bairro,c[i].end.cep);
	}
}

int main(){
	Cliente c[x];
	while(a==1){
	    preenche(c);
	    a = continuar();
	    if(a!=1){
	        mostrar(c);
	        break;
	    }
	}
	return 0;
}
