#include<stdio.h>
#include<stdlib.h>

typedef struct aluno{
	char nome[30];
	int matricula;
	float notas[3];
}Aluno;

void preenche(Aluno a[],int x,int y){
	int i,j;
	for(i=0;i<x;i++){
		printf("Nome do aluno %d: ",i+1);
		scanf("%[^\n]s",a[i].nome);
		setbuf(stdin,NULL);
		printf("Matricula do aluno %d: ",i+1);
		scanf("%d",&a[i].matricula);
		setbuf(stdin,NULL);
		for(j=0;j<y;j++){
			printf("Nota do trabalho %d do aluno %d: ",j+1,i+1);
			scanf("%f",&a[i].notas[j]);
			setbuf(stdin,NULL);
		}
	}
}

void maior1(Aluno a[],int x,int y){
	int i,j,ind;
	float maior=0;
	for(i=0;i<x;i++){
		if(a[i].notas[0]>maior){
			maior = a[i].notas[0];
			ind = i;
		}
	}
	printf("\n\nA maior nota no primeiro trabalho foi %.2f do(a) aluno(a) %s",a[ind].notas[0],a[ind].nome);
}

void maiorTot(Aluno a[],int x,int y){
	int i,j,indMa=0,indMe=0;
	float media[x],maior,menor;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			media[i] = media[i] + a[i].notas[j];
		}
	}
	maior=media[0];
	menor=media[0];
	for(i=0;i<x;i++){
		if(media[i]>maior){
			maior = media[i];
			indMa=i;
		}else if(media[i]<menor){
			menor = media[i];
			indMe=i;
		}
	}
	maior=maior/y;
	menor=menor/y;
	for(i=0;i<x;i++){
		media[i] = media[i]/y;
	}
	printf("\n\nA maior media eh de %.2f do(a) aluno(a) %s",maior,a[indMa].nome);
	printf("\nA menor media eh de %.2f do(a) aluno(a) %s",menor,a[indMe].nome);
	printf("\n\n");
	for(i=0;i<x;i++){
		if(media[i]>=6){
			printf("\n\nAluno: %s foi APROVADO com media %.2f",a[i].nome,media[i]);
		}else if(media[i]<6){
			printf("\n\nAluno: %s foi REPROVADO com media %.2f",a[i].nome,media[i]);
		}
	}
}

int main(){
	int x=5,y=3;
	Aluno a[x];
	preenche(a,x,y);
	maior1(a,x,y);
	maiorTot(a,x,y);
	return 0;
}
