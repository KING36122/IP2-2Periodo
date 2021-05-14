#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int x=0,max=100,i=0,aux=0;

typedef struct aniversario{
	int dia;
	int mes;
	int ano;
	char obs[100];
}Aniversario;

typedef struct numero{
	int ddd;
	int telefone;
}Numero;

typedef struct endereco{
	char rua[20];
	int num;
	char complemento[30];
	char bairro[20];
	int cep;
	char cidade[15];
	char estado[15];
	char pais[15];
}Endereco;

typedef struct pessoa{
	char nome[30];
	char email[30];
	Endereco end;
	Numero num;
	Aniversario an;
	char obs[100];
}Pessoa;

void preenche(Pessoa agenda[]){
//	int aux=0;
//	char busca[30];
//	i=0;
	printf("\nCADASTRO DOS CONTATOS\n\n");
	printf("\n");
//	TENTEI FAZER A ORDENAÇÃO ALFABÉTICA, DEU CERTO DESSA FORMA, MAS FUI TESTAR EM OUTRO DIA E DEIXOU DE FUNCIONAR, NÃO SEI O QUE ACONTECEU
//	printf("[%d] Nome: ",i+1);
//	scanf("%[^\n]s",busca);
//	setbuf(stdin,NULL);
//	for(i=x;i>=0;i--){
//		if(strcmp(busca,agenda[i].nome)<0){
//			agenda[i+1] = agenda[i];
//			aux = i;	
//		}
//	}
//	strcpy(agenda[aux].nome,busca);
//	setbuf(stdin,NULL);
	i=0;
	printf("[%d] Nome: ",i+1);
	scanf("%[^\n]s",agenda[aux].nome);
	setbuf(stdin,NULL);
	printf("[%d] Email: ",i+1);
	scanf("%[^\n]s",agenda[aux].email);
	setbuf(stdin,NULL);
	printf("Endereco:\n");
	printf("[%d] Rua: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.rua);
	setbuf(stdin,NULL);
	printf("[%d] Numero da casa: ",i+1);
    scanf("%d",&agenda[aux].end.num);
	setbuf(stdin,NULL);
	printf("[%d] Complemento: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.complemento);
	setbuf(stdin,NULL);
	printf("[%d] Bairro: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.bairro);
	setbuf(stdin,NULL);
	printf("[%d] CEP (apenas numeros): ",i+1);
	scanf("%d",&agenda[aux].end.cep);
	setbuf(stdin,NULL);
	printf("[%d] Cidade: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.cidade);
	setbuf(stdin,NULL);
	printf("[%d] Estado: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.estado);
	setbuf(stdin,NULL);
	printf("[%d] Pais: ",i+1);
	scanf("%[^\n]s",agenda[aux].end.pais);
	setbuf(stdin,NULL);
	printf("Numero de contato:\n");
	printf("[%d] DDD: ",i+1);
	scanf("%d",&agenda[aux].num.ddd);
	setbuf(stdin,NULL);
	printf("[%d] Telefone: ",i+1);
	scanf("%d",&agenda[aux].num.telefone);
	setbuf(stdin,NULL);
	printf("Data de aniversario:\n");
	printf("[%d] Dia: ",i+1);
	scanf("%d",&agenda[aux].an.dia);
	setbuf(stdin,NULL);
	printf("[%d] Mes (apenas numeros): ",i+1);
	scanf("%d",&agenda[aux].an.mes);
	setbuf(stdin,NULL);
	printf("[%d] Ano: ",i+1);
	scanf("%d",&agenda[aux].an.ano);
	setbuf(stdin,NULL);
	printf("[%d] Observacao especial: ",i+1);
	scanf("%[^\n]s",agenda[aux].an.obs);
	setbuf(stdin,NULL);
	x++;
	aux++;
}

void buscarP(Pessoa agenda[]){
	char busca[30];
	int c=0;
	printf("\n\nBuscar nome: ");
	scanf("%[^\n]s",busca);
	setbuf(stdin,NULL);
	c = strlen(busca);
	printf("\n\nCONTATOS:\n");
	for(i=0;i<x;i++){
		printf("\n");
		if(strncmp(busca,agenda[i].nome,c)==0){
			printf("Nome: %s\nE-mail: %s\n",agenda[i].nome,agenda[i].email);
			printf("Endereco--\n");
			printf("Rua: %s\nNumero da casa: %d\nComplemento: %s\nBairro: %s\nCEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",agenda[i].end.rua,agenda[i].end.num,agenda[i].end.complemento,agenda[i].end.bairro,agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
			printf("Numero de contato--\n");
			printf("(%d) %d\n",agenda[i].num.ddd,agenda[i].num.telefone);
			printf("Aniversario--\n");
			printf("%d/%d/%d\n",agenda[i].an.dia,agenda[i].an.mes,agenda[i].an.ano);
			printf("OBS: %s",agenda[i].an.obs);
		}
	}
}

void buscarM(Pessoa agenda[]){
	int m;
	printf("\n\nDigite o mes de busca:");
	scanf("%d",&m);
	setbuf(stdin,NULL);
	for(i=0;i<x;i++){
		if(m==agenda[i].an.mes){
			printf("\n\nNome: %s\nE-mail: %s\n",agenda[i].nome,agenda[i].email);
			printf("Endereco--\n");
			printf("Rua: %s\nNumero da casa: %d\nComplemento: %s\nBairro: %s\nCEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",agenda[i].end.rua,agenda[i].end.num,agenda[i].end.complemento,agenda[i].end.bairro,agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
			printf("Numero de contato--\n");
			printf("(%d) %d\n",agenda[i].num.ddd,agenda[i].num.telefone);
			printf("Aniversario--\n");
			printf("%d/%d/%d\n",agenda[i].an.dia,agenda[i].an.mes,agenda[i].an.ano);
			printf("OBS: %s",agenda[i].an.obs);
		}else{
			printf("Mes inexistente ou nenhum contato com nascimento nesse mes");
		}
	}	
}

void buscarDM(Pessoa agenda[]){
	int m,d;
	printf("\n\nDigite o dia de busca:");
	scanf("%d",&d);
	setbuf(stdin,NULL);
	printf("\n\nDigite o mes de busca:");
	scanf("%d",&m);
	setbuf(stdin,NULL);
	for(i=0;i<x;i++){
		if(m==agenda[i].an.mes && d==agenda[i].an.dia){
			printf("\n\nNome: %s\nE-mail: %s\n",agenda[i].nome,agenda[i].email);
			printf("Endereco--\n");
			printf("Rua: %s\nNumero da casa: %d\nComplemento: %s\nBairro: %s\nCEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",agenda[i].end.rua,agenda[i].end.num,agenda[i].end.complemento,agenda[i].end.bairro,agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
			printf("Numero de contato--\n");
			printf("(%d) %d\n",agenda[i].num.ddd,agenda[i].num.telefone);
			printf("Aniversario--\n");
			printf("%d/%d/%d\n",agenda[i].an.dia,agenda[i].an.mes,agenda[i].an.ano);
			printf("OBS: %s",agenda[i].an.obs);
		}
	}
}

void imprimeop(Pessoa agenda[]){
	int op;
	printf("Digite a opcao desejada:\n");
	printf("Digite 1 para mostrar: nome, telefone e e-mail de todos os contatos\n");
	printf("Digite 2 para mostrar todos os dados\n");
	printf("Opcao: ");
	scanf("%d",&op);
	setbuf(stdin,NULL);
	switch(op){
		case 1:
			printf("\n\nOpcao 1: Nome, Telefone e E-mail\n\n");
			for(i=0;i<x;i++){
				printf("\n");
				printf("Nome: %s -- Telefone: (%d) %d -- E-mail: %s",agenda[i].nome,agenda[i].num.ddd,agenda[i].num.telefone,agenda[i].email);
			}
			break;
		case 2:
			printf("\n\nOpcao 2: Todos os dados\n");
			for(i=0;i<x;i++){
				printf("\n");
				printf("Nome: %s\nE-mail: %s\n",agenda[i].nome,agenda[i].email);
				printf("Endereco--\n");
				printf("Rua: %s\nNumero da casa: %d\nComplemento: %s\nBairro: %s\nCEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",agenda[i].end.rua,agenda[i].end.num,agenda[i].end.complemento,agenda[i].end.bairro,agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
				printf("Numero de contato--\n");
				printf("(%d) %d\n",agenda[i].num.ddd,agenda[i].num.telefone);
				printf("Aniversario--\n");
				printf("%d/%d/%d\n",agenda[i].an.dia,agenda[i].an.mes,agenda[i].an.ano);
				printf("OBS: %s",agenda[i].an.obs);
			}
	}
}

int menu(){
	setbuf(stdin,NULL);
	int a;
	printf("--MENU DE OPCOES DA AGENDA--\n\n");
	printf("Digite 1 para inserir novos contatos\n");
	printf("Digite 2 para buscar por Nome\n");
	printf("Digite 3 para buscar por Mes de aniversario\n");
	printf("Digite 4 para buscar por Dia e mes de aniversario\n");
	printf("Digite 5 para retirar contatos\n");
	printf("Digite 6 para opcoes\n");
	printf("Digite 7 para mostrar todos os contatos\n");
	printf("Digite 8 para sair do menu\n");
	printf("Opcao: ");
	scanf("%d",&a);
	setbuf(stdin,NULL);
	return a;
}

void mostrarTudo(Pessoa agenda[]){
    printf("\n\nTODOS OS CONTATOS\n\n");
    for(i=0;i<x;i++){
        printf("\n\nNome: %s\nE-mail: %s\n",agenda[i].nome,agenda[i].email);
		printf("Endereco--\n");
		printf("Rua: %s\nNumero da casa: %d\nComplemento: %s\nBairro: %s\nCEP: %d\nCidade: %s\nEstado: %s\nPais: %s\n",agenda[i].end.rua,agenda[i].end.num,agenda[i].end.complemento,agenda[i].end.bairro,agenda[i].end.cep,agenda[i].end.cidade,agenda[i].end.estado,agenda[i].end.pais);
		printf("Numero de contato--\n");
		printf("(%d) %d\n",agenda[i].num.ddd,agenda[i].num.telefone);
		printf("Aniversario--\n");
		printf("%d/%d/%d\n",agenda[i].an.dia,agenda[i].an.mes,agenda[i].an.ano);
		printf("OBS: %s",agenda[i].an.obs);
    }
}

void retirar(Pessoa agenda[]){
	char busca[30];
	int c=0,aux=0;
	printf("\n\nRetirar qual nome?: ");
	scanf("%[^\n]s",busca);
	setbuf(stdin,NULL);
	for(i=0;i<x;i++){
		if(strncmp(busca,agenda[i].nome,30)==0){
			aux = i;
			i = x;
		}
	}
	if(aux==x){
        x--;
	}else{
	    for(i=aux;i<x;i++){
	        agenda[i] = agenda[i + 1];
	    }
	    x--;
	}
}

int main(){
	int a=1,b,c=1,va=0,ch=1;
	Pessoa agenda[max];
	setbuf(stdin,NULL);
	while(x>=0){
		printf("\n\n");
		a = menu();
		setbuf(stdin,NULL);
		if(a==8){
			x=-1;
		}
		switch(a){
			case 1:
				preenche(agenda);
				break;
			case 2:
				setbuf(stdin,NULL);
				buscarP(agenda);
				break;
			case 3:
				buscarM(agenda);
				break;
			case 4:
				buscarDM(agenda);
				break;
			case 5:
				retirar(agenda);
				break;
			case 6:
				imprimeop(agenda);
				break;
			case 7:
				mostrarTudo(agenda);
				break;
			case 8:
				printf("Saindo...");
				break;
		}
	}	
	return 0;
}
