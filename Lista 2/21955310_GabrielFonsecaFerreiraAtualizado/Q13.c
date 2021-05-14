#include<stdio.h>
#include<stdlib.h>
int X;

typedef struct paciente{
	int cpf,idade;
}Paciente;

int continuar(){
	int a;
	printf("Deseja continuar? 1 para sim, 2 para nao, 3 para sair do sistema: ");
	scanf("%d",&a);
	return a;
}

void listar(int c, int d, int c1[], int d1[], Paciente p[]){
	int i,j,k=0;
	printf("\n\n\nLISTA DE PACIENTES\n");
	printf("\nPRIORIDADES\n");
	printf("\nNum - CPF --- IDADE\n");
	for(i=0;i<c;i++){
		for(j=0;j<X;j++){
			if(c1[i] == p[j].idade){
				printf(" %d  -  %d  --- %d\n",i+1,p[j].cpf,c1[i]);
				k++;
			}
		}
	}
	printf("\nRestante dos Pacientes\n");
	printf("\nNum - CPF --- IDADE\n");
	for(i=0;i<d;i++){
		for(j=0;j<X;j++){
			if(d1[i] == p[j].idade){
				printf(" %d  -  %d  --- %d\n",k+1,p[j].cpf,d1[i]);
				k++;
			}
		}
	}
}

void preenche(Paciente p[],int max){
	int i=0,a,b=1,c=0,d=0,c1[c],d1[d];
	do{
		while(b>0){
			printf("\n\n");
			printf("\nDigite o CPF (apenas numeros): ");
			scanf("%d",&p[i].cpf);
			printf("\nDigite idade: ");
			scanf("%d",&p[i].idade);
			if(p[i].idade>=60){
				c1[c] = p[i].idade;
				c++;
			}else if(p[i].idade<60 && p[i].idade>0){
				d1[d] = p[i].idade;
				d++;
			}
			X++;
			a = continuar();
			if(a==2){
				b=0;
			}else if(a>3 || a<1){
				printf("Numero incorreto!\n");
				b=0;
			}
			switch(a){
				case 1:
					i++;
					break;
				case 2:
					printf("Saindo do cadastro...");
					b=0;
					i=max;
					break;	
				case 3:
					printf("Parando sistema...");
					b=0;
					i=max;
					break;			
			}
			if(i==max){
				break;
			}
		}
		break;
	}while(i<max);
	if(a<=2 && a>=1){
		listar(c,d,c1,d1,p);
	}
}

int main(){
	int max=30;
	Paciente p[X];
	preenche(p,max);
	return 0;
}
