#include<stdio.h>
#define x 100
int main(){
	int A[x],B[x],i,p=0,m=0,ind=0,j=0;
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
	do{
		m=0;
		for(i=0;i<x;i++){
			if(B[i]>m){
				m = B[i];
				ind = i;
			}
		}
		B[ind]=0;
		A[p] = m;
		j++;
		p--;
	}while(j<x);
	printf("\n\nVetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	return 0;
}
