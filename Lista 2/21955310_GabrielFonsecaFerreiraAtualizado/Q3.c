#include<stdio.h>
#include<stdlib.h>

typedef struct endereco{
	char rua[30];
	char bairro[30];
	int num;
}Endereco;

typedef struct dados{
	char nome[30];
	int idade;
	Endereco ende;
}Dados;

int main(){
	Dados a;
	printf("Digite seu nome: ");
	scanf("%[^\n]s",a.nome);
	setbuf(stdin,NULL);
	printf("Digite sua idade: ");
	scanf("%d",&a.idade);
	setbuf(stdin,NULL);
	printf("Digite o nome de sua rua: ");
	scanf("%[^\n]s",a.ende.rua);
	setbuf(stdin,NULL);
	printf("Digite o nome de seu bairro: ");
	scanf("%[^\n]s",a.ende.bairro);
	setbuf(stdin,NULL);
	printf("Digite o numero da sua casa: ");
	scanf("%d",&a.ende.num);
	setbuf(stdin,NULL);
	printf("\n\nNome: %s, idade: %d",a.nome,a.idade);
	printf("\nEndereco - Rua: %s, Bairro: %s, Num: %d",a.ende.rua,a.ende.bairro,a.ende.num);
	return 0;
}
