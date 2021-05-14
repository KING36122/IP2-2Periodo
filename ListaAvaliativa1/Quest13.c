#include<stdio.h>
#define x 30
int main(){
	int A[x],B[x],i,k=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\n\nDigite um valor: ");
	scanf("%d",&k);
	for(i=0;i<x;i++){
		B[i] = A[i] * k;
	}
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	return 0;
}
