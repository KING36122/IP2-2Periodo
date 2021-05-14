#include<stdio.h>
#define x 10
int main(){
	int A[x],B[x],C[x],i;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
		B[i] = 1 + rand() % 100;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	for(i=0;i<x;i++){
		C[i] = A[i] * B[i];
	}
	printf("\nVetor C:\n");
	for(i=0;i<x;i++){
		printf("%d\t",C[i]);
	}
	return 0;
}
