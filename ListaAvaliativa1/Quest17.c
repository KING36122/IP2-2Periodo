#include<stdio.h>
int main(){
	int MAX=20,A[MAX],i,j,x,r,a,aux=-1,a1;
	for(i=0;i<MAX;i++){
		A[i] = 1 + rand() % 10000;
	}
	printf("Vetor A:\n");
	for(i=0;i<MAX;i++){
		printf("%d\t",A[i]);
	}
	for(i=1;i<MAX;i++){
		x = A[i];
		j=i-1;
		while(j>= 0 && x < A[j]){
			A[j+1] = A[j];
			j--;
		}
		A[j+1]=x;
	}
	printf("\nVetor A(ordenado):\n");
	for(i=0;i<MAX;i++){
		printf("%d\t",A[i]);
	}
	printf("\n\nDigite um número para inserir na lista: ");
	scanf("%d",&a);
	for(i=0;i<MAX;i++){
		if(a<A[i]){
			aux = i;
			i = MAX;
		}
	}
	if(aux>=0){
		for(i=MAX;i>=aux;i--){
			A[i + 1] = A[i];
		}
		A[aux]=a;
		MAX++;
	}else{
		A[MAX]=a;
		MAX++;
	}
	aux=-1;
	printf("\nVetor A(ordenado):\n");
	for(i=0;i<MAX;i++){
		printf("%d\t",A[i]);
	}
	printf("\n\nDigite um número para remover da lista: ");
	scanf("%d",&a1);
	do{
		if(a1==A[j]){
			for(i=0;i<MAX;i++){
				if(a1==A[i]){
					aux=i;
					i=MAX;
				}
			}
			if(aux>=0){
				for(i=aux;i<MAX;i++){
					A[i] = A[i+1];
				}
				MAX--;
				break;
			}
		}else{
			j++;
		}
	}while(j<MAX);
	if(j==MAX){
		printf("\n\n[valor nao encontrado]");
	}
	printf("\nVetor A(ordenado):\n");
	for(i=0;i<MAX;i++){
		printf("%d\t",A[i]);
	}
	return 0;
}
