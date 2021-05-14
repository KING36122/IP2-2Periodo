#include<stdio.h>
#define x 50
int main(){
	int A[x],i,count=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	for(i=0;i<x;i++){
		if(A[i]%2==0){
			count++;
		}
	}
	printf("\nA quantidade de pares eh: %d",count);
	return 0;
}
