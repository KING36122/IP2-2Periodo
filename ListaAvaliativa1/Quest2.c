#include<stdio.h>
#define x 20
int main(){
	int A[x],i=0,j=0,a=0,count=0;
	do{
		a++;
		count=0;
		for(j=1;j<=a;j++){
			if(a%j==0){
				count++;
			}
		}
		if(count==2){
			A[i] = a;
			i++;
		}
	}while(i<x);
	printf("Os %d primeiros numeros primos sao:\n",x);
	for(i=0;i<x;i++){
		printf("%d\n",A[i]);
	}
	return 0;
}
