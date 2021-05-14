#include<stdio.h>
#define x 2
int main(){
	int A[x],B[x],C[x],i,p;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 100;
		B[i] = 2 + rand() % 100;
	}
	for(i=0;i<x;i++){
		C[i] = A[i];
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	p=x-1;
	for(i=0;i<x;i++){
		A[i] = B[p];
		B[p] = C[i];
		p--;
	}
	printf("\n\n\nVetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	return 0;
}
