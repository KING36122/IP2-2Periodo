#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct info{
	int tipo;
	float largura,comprimento;
}Info;

float calculaArea(float largura, float comprimento){
	float a;
	a = largura*comprimento;
	return a;
}

float lampada(int tipo, float area){
	float b;
	if(tipo==0){
		b = ceil((area*12)/60);
	}else if(tipo==1){
		b = ceil((area*15)/60);
	}else if(tipo==2){
		b = ceil((area*18)/60);
	}else if(tipo==3){
		b = ceil((area*20)/60);
	}else if(tipo==4){
		b = ceil((area*22)/60);
	}else{
		return 0;
	}
	return b;
}

void preenche(Info in){
	int i=0,b=1,x;
	float area;
	x++;
	while(b>0){
		printf("\n\nDigite o tipo de comodo: ");
		scanf("%d",&in.tipo);
		if(in.tipo==-1){
			printf("Saindo...");
			break;
		}
		if(in.tipo>4 || in.tipo<0 && in.tipo!=-1){
			printf("\nTipo incorreto!");
		}else{
			printf("Digite a largura do comodo: ");
			scanf("%f",&in.largura);
			printf("Digite o comprimento do comodo: ");
			scanf("%f",&in.comprimento);
			area = calculaArea(in.largura,in.comprimento);
			switch(in.tipo){
				case 0:
					b = lampada(in.tipo,area);
					printf("\n\nComodo com %.2f m2 precisa de %d lampadas",area,b);
					break;
				case 1:
					b = lampada(in.tipo,area);
					printf("\n\nComodo com %.2f m2 precisa de %d lampadas",area,b);
					break;
				case 2:
					b = lampada(in.tipo,area);
					printf("\n\nComodo com %.2f m2 precisa de %d lampadas",area,b);
					break;
				case 3:
					b = lampada(in.tipo,area);
					printf("\n\nComodo com %.2f m2 precisa de %d lampadas",area,b);
					break;
				case 4:
					b = lampada(in.tipo,area);
					printf("\n\nComodo com %.2f m2 precisa de %d lampadas",area,b);
					break;
				case -1:
					printf("Saindo...");
					b=0;
					break;
				default:
					printf("\nTipo incorreto!");
					break;
			}
			b++;
		}
		
	}
}

int main(){
	int x=0;
	Info in;
	preenche(in);
	return 0;
}
