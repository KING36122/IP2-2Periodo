#include<stdio.h>
int main(){
	int n;
	printf("Digite o valor para n: ");
	scanf("%d",&n);
	int A[n],B[n],r=0,i,count=0;
	for(i=0;i<n;i++){
		A[i] = 1 + rand() % 100;
		B[i] = 2 + rand() % 100;
	}
	printf("X = {\t");
	for(i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
	printf("}");
	printf("\nY = {\t");
	for(i=0;i<n;i++){
		printf("%d\t",B[i]);
	}
	printf("}");
	for(i=0;i<n;i++){
		r = r + (A[i] * B[i]);
	}
	printf("\n\nProduto escalar = {%d}",r);
	return 0;
}
