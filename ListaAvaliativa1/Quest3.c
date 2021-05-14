#include<stdio.h>
#define a 10
int main(){
	int X[a],Y[a],Z[a],i,count=0;
	for(i=0;i<a;i++){
		X[i] = 1 + rand() % 100;
		Y[i] = 2 + rand() % 100;
	}
	printf("Vetor X:\n");
	for(i=0;i<a;i++){
		printf("%d\t",X[i]);
	}
	printf("\nVetor Y:\n");
	for(i=0;i<a;i++){
		printf("%d\t",Y[i]);
	}
	for(i=0;i<a;i++){
		Z[i] = X[i] - Y[i];
	}
	printf("\nX - Y:\n");
	for(i=0;i<a;i++){
		printf("%d\t",Z[i]);
	}
	for(i=0;i<a;i++){
		Z[i] = X[i] + Y[i];
	}
	printf("\nX + Y:\n");
	for(i=0;i<a;i++){
		printf("%d\t",Z[i]);
	}
	for(i=0;i<a;i++){
		Z[i] = X[i] * Y[i];
	}
	printf("\nX * Y:\n");
	for(i=0;i<a;i++){
		printf("%d\t",Z[i]);
	}
	return 0;
}
