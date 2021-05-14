#include<stdio.h>

void mostrar(int v[],int x){
	int i;
	printf("\n");
	for(i=0;i<x;i++){
		printf("%d ",v[i]);
	}
}

void organizar(int v[], int x){
	int i,aux,j;
	for(i=0;i<x;i++){
		aux = v[i];
		j=i-1;
		while(j>= 0 && aux < v[j]){
			v[j+1] = v[j];
			j--;
		}
		v[j+1]=aux;
	}
}

float buscaMediana(int v[],int x){
	int a,e;
	float b,c,d;
	if(x%2==0){
		a = x/2;
		b = v[a-1];
		c = v[a];
		d = (b+c)/2;
		return d;
	}else{
		a = x/2;
		e = v[a];
		return e;
	}
}

int main(){
	int x;
	float med;
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&x);
	int i,v[x];
	printf("Informe os valores do vetor:\n ");
	for(i=0;i<x;i++){
		printf("v[%d]:",i);
		scanf("%d",&v[i]);
	}
	printf("\nVetor:");
	mostrar(v,x);
	organizar(v,x);
	printf("\n\nVetor organizado:");
	mostrar(v,x);
	med = buscaMediana(v,x);
	printf("\n\nA mediana eh = [%.1f]",med);	
}
