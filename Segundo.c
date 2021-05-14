#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define N 10
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, v[N],ci=0,cp=0;
	for(i=0;i<N;i++){
		v[i] = 1 + rand() % 100;
	}
	for(i=0;i<N;i++){
		printf("\n %d",v[i]);
	}
	for(i=0;i<N;i++){
		if(v[i]%2==0){
			cp++;
		}else if(v[i]%2!=0){
			ci++;
		}
	}
	int impar[ci], par[cp],j=0,l=0;
	for(i=0;i<N;i++){
		if(v[i]%2==0){
			par[j]= v[i];
			j++;
//			printf("\n %d",par[j]);
		}else if(v[i]%2!=0){
			impar[l]= v[i];
			l++;
		}
	}
	printf("\nPares:\n");
	for(i=0;i<cp;i++){
		printf("\n %d",par[i]);
	}
	printf("\nÍmpares:\n");
	for(i=0;i<ci;i++){
		printf("\n %d",impar[i]);
	}
}
