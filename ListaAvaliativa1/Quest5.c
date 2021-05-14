#include<stdio.h>
#define x 10
int main(){
	int A[x],i=0,b=0,r=0,j=0,g=0;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 100;
	}
	printf("Vetor A:\n");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	for(i=0;i<x;i++){
		r=0;
		for (j=2;j<=A[i]/2;j++) {
	    	if (A[i]%j == 0) {
	       		r++;
	    	}
 		}
 		if((r==0)&&(A[i]!=1)){
 			b++;
		 }
	}
	int B[b];
	do{
		for(i=0;i<x;i++){
			r=0;
			for (j=2;j<=A[i]/2;j++) {
		    	if (A[i]%j == 0) {
		       		r++;
		    	}
	 		}
	 		if((r==0)&&(A[i]!=1)){
	 			B[g] = A[i];
	 			g++;
			 }
		}
	}while(g<b);
	printf("\n\nVetor B:");
	for(i=0;i<b;i++){
		printf("%d\t",B[i]);
	}
	return 0;
}
