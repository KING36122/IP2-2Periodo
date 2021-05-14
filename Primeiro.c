#include<stdio.h>
#define x 5
int main(){
	int A[x],i,count;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	for(i=0;i<x;i++){
		if(A[i]%2==0){
			count+=1;
		}
	}
	printf("A quantidade de pares é: %d",count);
	return 0;
}
