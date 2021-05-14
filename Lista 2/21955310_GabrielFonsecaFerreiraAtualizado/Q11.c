#include<stdio.h>
#include<stdlib.h>

typedef struct dom{
	char nome[15];
	float potencia,tempo;
}Dom;

void preenche(Dom d[], int x){
	int i;
	for(i=0;i<x;i++){
		printf("[%d] Nome: ",i+1);
		scanf("%[^\n]s",d[i].nome);
		setbuf(stdin,NULL);
		printf("[%d] Potencia (em KW): ",i+1);
		scanf("%f",&d[i].potencia);
		setbuf(stdin,NULL);
		printf("[%d] Tempo ativo por dia (em horas): ",i+1);
		scanf("%f",&d[i].tempo);
		setbuf(stdin,NULL);
	}
}

void consumo(Dom d[], int x,int t){
	int i;
	float c[x],ct=0;
	for(i=0;i<x;i++){
		c[i] = d[i].potencia*d[i].tempo;
	}
	for(i=0;i<x;i++){
		ct = ct + c[i];
	}
	printf("\n\nConsumo total da casa em %d dias eh de %.2f KWh",t,ct*t);
	printf("\n\nConsumo de cada eletrodomestico:\n");
	for(i=0;i<x;i++){
		printf("\nConsumo relativo de %s eh de %.1f porcento em %d dias",d[i].nome,((c[i]/ct))*100,t);
	}
}

int main(){
	int x=5,tem;
	Dom d[x];
	preenche(d,x);
	printf("\n\nInforme o tempo: ");
	scanf("%d",&tem);
	setbuf(stdin,NULL);
	consumo(d,x,tem);
	return 0;
}
