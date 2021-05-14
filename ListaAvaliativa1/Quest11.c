#include<stdio.h>
#define x 100
int main(){
	int A[x],i,ma=0,me=0,ime=0,ima=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 1000;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	ma=A[0];
	me=A[0];
	for(i=0;i<x;i++){
		if(A[i]<me){
			me=A[i];
			ime=i;
		}else if(A[i]>ma){
			ma=A[i];
			ima=i;
		}
	}
	printf("\n\nMaior: %d na posicao %d",ma,ima);
	printf("\nMenor: %d na posicao %d",me,ime);
	return 0;
}
