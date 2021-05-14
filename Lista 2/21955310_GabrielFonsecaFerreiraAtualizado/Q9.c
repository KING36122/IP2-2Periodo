#include<stdio.h>
#include<stdlib.h>
int x=0,max=100,i=0,a=1;

typedef struct proprietario{
	char nome[30];
	long int cpf;
}Proprietario;

typedef struct carro{
	char modelo[15];
	int ano;
	char placa[5];
	Proprietario pro;
}Carro;

int continuar(){
	int a=0;
	printf("Deseja continuar? 1 para sim, 2 para nao: ");
	scanf("%d",&a);
	return a;
}

void preenche(Carro car[]){
	setbuf(stdin,NULL);
	printf("[%d] Digite o modelo do carro: ",i+1);
	scanf("%[^\n]s",car[i].modelo);
	setbuf(stdin,NULL);
    printf("[%d] Digite o ano do carro: ",i+1);
	scanf("%d",&car[i].ano);
	setbuf(stdin,NULL);
	printf("[%d] Digite a placa do carro: ",i+1);
	scanf("%[^\n]s",car[i].placa);
	setbuf(stdin,NULL);
	printf("[%d] Digite o nome do proprietario do carro: ",i+1);
	scanf("%[^\n]s",car[i].pro.nome);
	setbuf(stdin,NULL);
	printf("[%d] Digite o CPF (somente numeros) do proprietario do carro: ",i+1);
	scanf("%ld",&car[i].pro.cpf);
	setbuf(stdin,NULL);
	x++;
	i++;
}

void mostrar(Carro car[]){
    int i;
    for(i=0;i<x;i++){
        printf("\n\n[%d] Nome: %s, CPF: %ld ",i+1,car[i].pro.nome,car[i].pro.cpf);
        printf("\nDados do Carro-> Modelo: %s, ano: %d, placa %s ",car[i].modelo,car[i].ano,car[i].placa);
    }
}

int main(){
	Carro car[max];
	while(a==1){
	    preenche(car);
	    a = continuar();
	    if(a!=1){
	        mostrar(car);
	        break;
	    }
	}
	return 0;
}
