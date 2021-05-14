#include<stdio.h>
#define x 30
int main(){
	int A[x],B[x],i=0,m=0,j=0,p=0,ind=0;
	for(i=0;i<x;i++){
		A[i] = 2 + rand() % 100;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	p=x-1;
	do{
		m=0;
		for(i=0;i<x;i++){
			if(A[i]>m){
				m = A[i];
				ind = i;
			}
		}
		A[ind]=0;
		B[p] = m;
		j++;
		p--;
	}while(j<x);
	printf("\nVetor B:\n");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	return 0;
}
