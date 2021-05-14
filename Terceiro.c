#include<stdio.h>
#define x 2
#define n 3
typedef struct aluno{
	char nome[30];
	float nota[n],media;
}Aluno;
int main(){
	Aluno a[x];
	int i,j;
	float soma;
	for(j=0;j<x;j++){
		soma=0;
		printf("Digite o nome do aluno: ");
		scanf("%s",&a[j].nome);
		for(i=0;i<n;i++){
			printf("Digite a %d nota: ",i+1);
			scanf("%f",&a[j].nota[i]);
			soma = soma + a[j].nota[i];
		}
		a[j].media = soma/n;
	}
	for(i=0;i<x;i++){
		printf("O aluno %s teve media: %.2f\n",a[i].nome,a[i].media);
	}
	
	return 0;
}
