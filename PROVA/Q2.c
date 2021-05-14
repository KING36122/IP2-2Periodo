#include<stdio.h>

void mostrar(int v[], int M){
	int i;
	printf("\nVetor:\n");
	for(i=0;i<M;i++){
		printf("%d\t",v[i]);
	}
}

int mostraMaior(int v[],int M){
	int i,m;
	m = v[0];
	for(i=0;i<M;i++){
		if(v[i]>m){
			m = v[i];
		}
	}
	printf("\n\nO maior valor eh: %d",m);
	return m;
}

void mostraMaior1(int v[], int M, int a){
	int i, m;
	m = v[0];
	for(i=0;i<M;i++){
		if(v[i]>m && v[i]!=a){
			m = v[i];
		}
	}
	printf("\nO maior eh: %d e o segundo maior eh: %d",a,m);
}

void media(int v[], int M){
	int i;
	float media,soma=0;
	for(i=0;i<M;i++){
		soma = soma + v[i];
	}
	media = soma/M;
	printf("\n\nA media eh: %.1f",media);
}

void verifica(int v[],int M){
	int i,count,a=0,b;
	do{
		b = v[a];
		count=0;
		for(i=0;i<M;i++){
			if(v[a]==v[i]){
				count++;
			}
		}
		if(count>2){
			break;
		}
		a++;
	}while(a<M);
	if(count>2){
		printf("\n\n[Verdadeiro]");
	}else{
		printf("\n\n[Falso]");
	}
}

int main(){
	int i, M,a=0;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&M);
	int v[M];
	for(i=0;i<M;i++){
		v[i] = 1 + rand() % 100;
	}
	mostrar(v,M);
	a = mostraMaior(v,M);
	mostraMaior1(v,M,a);
	media(v,M);
	verifica(v,M);
}
