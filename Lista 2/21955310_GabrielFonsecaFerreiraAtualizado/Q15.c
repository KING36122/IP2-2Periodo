#include<stdio.h>
#include<stdlib.h>
int X=0,max=100,i=0,a=1;

typedef struct cliente{
	char nome[30];
	int sexo,idade,fumo,esporte,atv;
	float renda;
	
}Cliente;

int continuar(){
	int a;
	printf("Deseja continuar? 1 para sim, 2 para nao: ");
	scanf("%d",&a);
	return a;
}

void preenche(Cliente c[]){
	setbuf(stdin,NULL);
	printf("\n\n\nPESQUISA\n");
	printf("[%d] Nome: ",i+1);
	scanf("%[^\n]s",c[i].nome);
	setbuf(stdin,NULL);
	printf("[%d] Sexo (digite 1 para feminino, 2 para masculino ou 3 para outro): ",i+1);
	scanf("%d",&c[i].sexo);
	setbuf(stdin,NULL);
	printf("[%d] Idade: ",i+1);
	scanf("%d",&c[i].idade);
	setbuf(stdin,NULL);
	printf("[%d] Renda Mensal: ",i+1);
	scanf("%f",&c[i].renda);
	setbuf(stdin,NULL);
	printf("[%d] Fumante? (digite 1 para sim ou 2 para nao): ",i+1);
	scanf("%d",&c[i].fumo);
	setbuf(stdin,NULL);
	printf("[%d] Gosta de Esportes? (digite 1 para sim ou 2 para nao): ",i+1);
	scanf("%d",&c[i].esporte);
	setbuf(stdin,NULL);
	printf("[%d] Pratica atividade fisica? (digite 1 para sim ou 2 para nao): ",i+1);
	scanf("%d",&c[i].atv);
	setbuf(stdin,NULL);
	X++;
	i++;
}

void pesquisa(Cliente c[]){
	char busca[30];
	printf("Digite o nome do entrevistado: ");
	scanf("%[^\n]s",busca);
	setbuf(stdin,NULL);
	printf("\n\nEntrevistas\n");
	for(i=0;i<X;i++){
		if(strncmp(busca,c[i].nome,30)==0){
			printf("\nNome: %s\n",c[i].nome);
			if(c[i].sexo==1){
				printf("Sexo: Feminino\n");
			}else if(c[i].sexo==2){
				printf("Sexo: Masculino\n");
			}else if(c[i].sexo==3){
				printf("Sexo: Outro\n");
			}
			printf("Idade: %d\nRenda Mensal: R$%.2f\n",c[i].idade,c[i].renda);
			if(c[i].fumo==1){
				printf("Fumante?: Sim\n");
			}else if(c[i].fumo==2){
				printf("Fumante?: Nao\n");
			}
			if(c[i].esporte==1){
				printf("Gosta de praticar esporte?: Sim\n");
			}else if(c[i].esporte==2){
				printf("Gosta de praticar esporte?: Nao\n");
			}
			if(c[i].atv==1){
				printf("Pratica atividade fisica?: Sim\n");
			}else if(c[i].atv==2){
				printf("Pratica atividade fisica?: Nao\n");
			}
		}
	}
}

void estat(Cliente c[]){
	int i;
	float ch=0,cm=0,co=0,ph=0,pm=0,po=0,ci=0,pi=0,cf=0,pf=0,pnf=0,rm=0;
	for(i=0;i<X;i++){
		if(c[i].sexo==1){
			cm++;
		}else if(c[i].sexo==2){
			ch++;
		}else if(c[i].sexo==3){
			co++;
		}
	}
	ph=(ch/X)*100;
	pm=(cm/X)*100;
	po=(co/X)*100;
	printf("\n\nESTATISTICAS\n\n");
	printf("\nPercentual de homens, mulheres e outros: ");
	printf("\nHomens: %.1f porcento",ph);
	printf("\nMulheres: %.1f porcento",pm);
	printf("\nOutros: %.1f porcento",po);
	for(i=0;i<X;i++){
		if(c[i].idade>= 18 && c[i].idade<=40){
			ci++;
		}
	}
	pi=(ci/X)*100;
	printf("\n\nPercentual de pessoas entre 18 e 40 anos: ");
	printf("\n18-40: %.1f porcento",pi);
	for(i=0;i<X;i++){
		if(c[i].fumo == 1){
			cf++;
		}
	}
	pf=(cf/X)*100;
	pnf=100-pf;
	printf("\n\nPercentual de pessoas que fumam: ");
	printf("\nFumantes: %.1f porcento",pf);
	printf("\nNao fumantes: %.1f porcento",pnf);
	for(i=0;i<X;i++){
		rm = rm + c[i].renda;
	}
	rm=rm/X;
	printf("\n\nRenda media dos entrevistados: ");
	printf("\nRM: R$%.1f reais",rm);
}

void gravar(Cliente c[],FILE *arq){
	int i;
	for(i=0;i<X;i++){
		fprintf(arq, "\nNome: %s\n",c[i].nome);
		if(c[i].sexo==1){
			fprintf(arq, "Sexo: Feminino\n");
		}else if(c[i].sexo==2){
			fprintf(arq, "Sexo: Masculino\n");
		}else if(c[i].sexo==3){
			fprintf(arq, "Sexo: Outro\n");
		}
		fprintf(arq, "Idade: %d\nRenda Mensal: R$%.2f\n",c[i].idade,c[i].renda);
		if(c[i].fumo==1){
			fprintf(arq, "Fumante?: Sim\n");
		}else if(c[i].fumo==2){
			fprintf(arq, "Fumante?: Nao\n");
		}
		if(c[i].esporte==1){
			fprintf(arq, "Gosta de praticar esporte?: Sim\n");
		}else if(c[i].esporte==2){
			fprintf(arq, "Gosta de praticar esporte?: Nao\n");
		}
		if(c[i].atv==1){
			fprintf(arq, "Pratica atividade fisica?: Sim\n");
		}else if(c[i].atv==2){
			fprintf(arq, "Pratica atividade fisica?: Nao\n");
		}
	}
}

int main(){
	Cliente c[max];
	FILE *arq = fopen("Entrevista.txt","w");
	if(arq == NULL){
		printf("\n\nERROR 404");
	}else{
		printf("\n\nCriado!");
	}
	while(a==1){
	    preenche(c);
	    a = continuar();
	    if(a!=1){
	        break;
	    }
	}
	gravar(c,arq);
	fclose(arq);
	setbuf(stdin,NULL);
	pesquisa(c);
	estat(c);
	return 0;
}
