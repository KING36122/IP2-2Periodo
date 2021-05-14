#include<stdio.h>
int main(){
	int lin=15,col=5,M[lin][col],A[lin*col],i,j,a,b,count=0,val=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			M[i][j] = 1 + rand() % 100;
		}
	}
	printf("\nMatriz M:\n");
	for(i=0;i<lin;i++){
		printf("|\t");
		for(j=0;j<col;j++){
			printf("%d\t",M[i][j]);
		}
		printf("|\n");
	}
//	for(i=0;i<lin;i++){
//		for(j=0;j<col;j++){
//			val = M[i][j];
//			count=0;
//			for(a=0;a<lin;a++){
//				for(b=0;b<col;b++){
//					if(val==M[a][b]){
//						count++;
//					}
//				}
//			}
//			if(count>1){
//				printf("%d se repete %d vezes\n",val,count);
//			}
//		}
//	}
	do{
		for(i=0;i<lin;i++){
			for(j=0;j<col;j++){
					A[a] = M[i][j];
					a++;
			}
		}
	}while(a<lin*col);
	for(i=0;i<lin*col;i++){
		count=0;
		for(j=0;j<lin*col;j++){
			if(A[i]==A[j] && A[i]!=0){
				count++;
			}
		}
		if(count>1){
			printf("\nO numero %d aparece %d vezes",A[i],count);
		}
		val = A[i];
		if(A[i]==val){
			A[i] = 0;
		}
		val=0;
	}
	
	return 0;
}
