#include<stdio.h>
#define x 20
int main(){
	int A[x],B[x],i,p=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	for(i=0;i<x;i++){
		B[i] = A[i];
	}
	p=x-1;
	for(i=0;i<x;i++){
		A[i] = B[p];
		p--;
	}
	printf("\n\nVetor A(novo):\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	return 0;
}
