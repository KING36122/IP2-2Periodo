#include<stdio.h>
//#include<string.h>
int main(){
	char nome[30];
	char nome1[30];
	
	printf("Nome: ");
	gets(nome);//Usar só gets ou só scanf
	printf("\n\nNome: %s",nome);
	printf("\n\nNome: ");
	gets(nome1);
	printf("\n\nNome: %s",nome1);
	
	
}
