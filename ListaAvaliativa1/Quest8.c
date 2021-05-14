#include<stdio.h>
#define x 50
int main(){
	int A[x],i=0,count=0,j=0,g=0,q=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	for(i=0;i<x;i++){
		if(A[i]%2==0){
			count++;
		}
	}
	q=x-count;
	int B[count],C[q];
	do{
		for(i=0;i<x;i++){
			if(A[i]%2==0){
				B[j] = A[i];
				j++;
			}
		}
	}while(j<count);
	do{
		for(i=0;i<x;i++){
			if(A[i]%2!=0){
				C[g] = A[i];
				g++;
			}
		}
	}while(g<q);
	printf("\nVetor B:\n");
	for(i=0;i<count;i++){
		printf("%d\t",B[i]);
	}
	printf("\nVetor C:\n");
	for(i=0;i<q;i++){
		printf("%d\t",C[i]);
	}
	return 0;
}
