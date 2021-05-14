#include<stdio.h>
int main(){
	int x;
	printf("Quantos valores deseja para o vetor?: ");
	scanf("%d",&x);
	int A[x],B[x],i,p=0,c=0;
	for(i=0;i<x;i++){
		printf("Digite um valor pro vetor: ");
		scanf("%d",&A[i]);
	}
	for(i=0;i<x;i++){
		B[i] = A[i];
	}
	p=x-1;
	for(i=0;i<x;i++){
		B[i] = A[p];
		p--;
	}
	printf("\n\nVetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\nVetor B:\n");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	for(i=0;i<x;i++){
		if(A[i]==B[i]){
			c++;
		}
	}
	if(c==x){
		printf("\nO vetor e palindromo!");
	}else{
		printf("\nO vetor n e palindromo!");
	}
	return 0;
}
