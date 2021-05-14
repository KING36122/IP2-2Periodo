#include<stdio.h>
int main(){
	int A[10],B[10],i,p=0;
	for(i=0;i<10;i++){
		A[i] = 1 + rand() % 1000;
	}
	printf("\n\nVetor A:\n");
	for(i=0;i<10;i++){
		printf("%d\t",A[i]);
	}
	for(i=0;i<10;i++){
		B[i] = A[i];
	}
	p=9;
	for(i=0;i<10;i++){
		A[i] = B[p];
		p--;
	}
	printf("\n\nVetor A(novo):\n");
	for(i=0;i<10;i++){
		printf("%d\t",A[i]);
	}
	return 0;
}
