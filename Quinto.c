#include<stdio.h>
//#include<string.h>
int main(){
	char nome[30];
	char nome1[30];
	
	printf("Nome: ");
	gets(nome);//Usar s� gets ou s� scanf
	printf("\n\nNome: %s",nome);
	printf("\n\nNome: ");
	gets(nome1);
	printf("\n\nNome: %s",nome1);
	
	
}
