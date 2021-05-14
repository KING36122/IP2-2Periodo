#include<stdio.h>
#define x 50
int main(){
	int A[x],B[x],i,r=0,p=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 100;
		B[i] = 2 + rand() % 100;
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
		r = r + (A[i] - B[p]);
		p--;
	}
	printf("\nResultado: %d",r);
	return 0;
}
