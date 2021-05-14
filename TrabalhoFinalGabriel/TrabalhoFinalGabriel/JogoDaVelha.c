#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

float partidas=0;

char tutorial(){
	char op;
	system("cls");
	printf("  1   2   3 \n");
	printf("1   |   |   \n");
	printf(" -----------\n");
	printf("2   |   |   \n");
	printf(" -----------\n");
	printf("3   |   |   \n");
	Sleep(1500);
	printf("\n\nESTE É O TABULEIRO");
	Sleep(2000);
	printf("\n\nVocê digita uma coordenada (linha e coluna) e aparece seu respectivo símbolo");
	Sleep(2000);
	printf("\n\nPor exemplo vamos adcionar o X na primeira posição");
	printf("\n\nDigite a linha: 1");
	printf("\nDigite a coluna: 1");
	Sleep(1500);
	printf("\nLogo após isso o tabuleiro fica deste jeito:\n\n");
	printf("  1   2   3 \n");
	printf("1 X |   |   \n");
	printf(" -----------\n");
	printf("2   |   |   \n");
	printf(" -----------\n");
	printf("3   |   |   \n");
	Sleep(2000);
	printf("\n\nGanha quem preencher a mesma coluna, linha ou diagonal com o mesmo símbolo!");
	Sleep(2000);
	printf("\n\nDigite algo para retornar ao jogo (ou digite 1 para rever o tutorial): ");
	scanf("%c",&op);
	return op;
}

void tabuleiro(char jogo[3][3]){
	system("cls");
	printf("  1   2   3 \n");
	printf("1 %c | %c | %c \n",jogo[0][0],jogo[0][1],jogo[0][2]);
	printf(" -----------\n");
	printf("2 %c | %c | %c \n",jogo[1][0],jogo[1][1],jogo[1][2]);
	printf(" -----------\n");
	printf("3 %c | %c | %c \n",jogo[2][0],jogo[2][1],jogo[2][2]);
}

void relatorio(int j1, int j2, int empate,FILE *arq){
	float jog1=0.0,jog2=0.0,emp=0.0;
	jog1 = (j1/partidas)*100;
	jog2 = (j2/partidas)*100;
	emp = (empate/partidas)*100;
	printf("-------------------------------------------------------------------");
	printf("\n\t\t\tRELATÓRIO DAS PARTIDAS");
	printf("\n\nQuantidade de partidas jogadas: %.0f partida(s)",partidas);
	printf("\nQuantidade de partidas vencidas pelo jogador 1: %d partida(s)",j1);
	printf("\nQuantidade de partidas vencidas pelo jogador 2: %d partida(s)",j2);
	printf("\nQuantidade de empates: %d empate(s)",empate);
	printf("\nPorcentagem de ganhos do jogador 1: %.0f porcento",jog1);
	printf("\nPorcentagem de ganhos do jogador 2: %.0f porcento",jog2);
	printf("\nPorcentagem de empates: %.0f porcento",emp);
	printf("\n-------------------------------------------------------------------");
	
	fprintf(arq, "-------------------------------------------------------------------");
	fprintf(arq, "\n\t\t\tRELATÓRIO DAS PARTIDAS");
	fprintf(arq, "\n\nQuantidade de partidas jogadas: %.0f partida(s)",partidas);
	fprintf(arq, "\nQuantidade de partidas vencidas pelo jogador 1: %d partida(s)",j1);
	fprintf(arq, "\nQuantidade de partidas vencidas pelo jogador 2: %d partida(s)",j2);
	fprintf(arq, "\nQuantidade de empates: %d empate(s)",empate);
	fprintf(arq, "\nPorcentagem de ganhos do jogador 1: %.0f porcento",jog1);
	fprintf(arq, "\nPorcentagem de ganhos do jogador 2: %.0f porcento",jog2);
	fprintf(arq, "\nPorcentagem de empates: %.0f porcento",emp);
	fprintf(arq, "\n-------------------------------------------------------------------");
}

int verifica(char jogo[3][3],int jogadas){
	if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'){
		jogadas = -1;
	}else if(jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X'){
		jogadas = -1;
	}else if(jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
		jogadas = -1;
	}else if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X'){
		jogadas = -1;
	}else if(jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'){
		jogadas = -1;
	}else if(jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
		jogadas = -1;
	}else if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
		jogadas = -1;
	}else if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
		jogadas = -1;
	}else if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O'){
		jogadas = -2;
	}else if(jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O'){
		jogadas = -2;
	}else if(jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
		jogadas = -2;
	}else if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O'){
		jogadas = -2;
	}else if(jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'){
		jogadas = -2;
	}else if(jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
		jogadas = -2;
	}else if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
		jogadas = -2;
	}else if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
		jogadas = -2;
	}
	return jogadas;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int op,i=0,j=0,lin=0,col=0,vezJogador=0,jogadas=0,j1=0,j2=0,empate=0;
	char jogo[3][3] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char op1;
	printf("Deseja ver o tutorial? (1 para sim, 2 para não): ");
	scanf("%c",&op1);
	setbuf(stdin,NULL);
	while(op1=='1'){
		op1=tutorial();
		setbuf(stdin,NULL);
	}
	do{
		jogadas = 0;
		vezJogador = 0;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				jogo[i][j] = ' ';
			}
		}
		do{
			tabuleiro(jogo);
			if(vezJogador%2==0){
				printf("\nVez do jogador 1 (X)");
			}else{
				printf("\nVez do jogador 2 (O)");
			}
			printf("\n\nDigite a linha: ");
			scanf("%d",&lin);
			printf("\nDigite a coluna: ");
			scanf("%d",&col);
			if(lin < 1 || lin > 3 || col < 1 || col > 3){
				lin = 0;
				col = 0;
			}else if(jogo[lin-1][col-1] != ' '){
				lin = 0;
				col = 0;
			}else{
				if(vezJogador%2==0){
					jogo[lin-1][col-1] = 'X';
				}else{
					jogo[lin-1][col-1] = 'O';
				}
				vezJogador++;
				jogadas++;
			}
			tabuleiro(jogo);
			jogadas = verifica(jogo,jogadas);
		}while(jogadas < 9 && jogadas > 0);
		if(jogadas == 9){
			printf("\n\nJogo Empatado!");
			empate++;
		}else if(jogadas == -1){
			printf("\nJogador 1 venceu!");
			j1++;
		}else if(jogadas == -2){
			printf("\nJogador 2 venceu!");
			j2++;
		}
		printf("\n\nDeseja continuar? (1 para sim, 2 para não): ");
		scanf("%d",&op);
		partidas++;
		system("cls");
	}while(op == 1);
	system("cls");
	FILE *arq = fopen("Relatorio.txt","w");
	relatorio(j1,j2,empate,arq);
	return 0;
}
