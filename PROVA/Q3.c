#include <stdio.h>
#define x 2
#define y 2

void mostra(float M[x][y]){
	int i,j;
	printf("\n\nMatriz:\n");
	for(i=0;i<x;i++){
		printf("|");
		for(j=0;j<y;j++){
			printf("\t%.2f ",M[i][j]);
		}
		printf("\t|\n");
	}
}

void menor(float M[x][y]){
	int i,j,a,lin;
	a = M[0][1];
	for(i=0;i<x;i++){
		if(M[i][1]<a){
			a = M[i][1];
			lin = i;
		}
	}
	printf("\n\nA menor temperatura eh %d e sua latitude eh %.2f",a,M[lin][0]);
}

void media(float M[x][y]){
	int i;
	float norte=0,sul=0,cn=0,cs=0,medNorte=0,medSul=0;
	for(i=0;i<x;i++){
		if(M[i][0]>=1 && M[i][0]<=90){
			norte = norte + M[i][1];
			cn++;
		}else if(M[i][0]>=-90 && M[i][0]<=-1){
			sul = sul + M[i][1];
			cs++;
		}
	}
	medNorte = norte/cn;
	medSul = sul/cs;
	printf("\n\nA temperatura media do hemisferio norte eh: %.2f",medNorte);
	printf("\nA temperatura media do hemisferio sul eh: %.2f",medSul);
}

void tabela(float M[x][y]){
	int i,a=0,j;
	float val=0,s=0,count,A[x][y];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			A[i][j] = M[i][j];
		}
	}
	printf("\n\nLatitude 	-	Media \n");
	do{
		val = A[a][0];
		s=0;
		count=0;
		for(i=0;i<x;i++){
			if(val == A[i][0] && A[i][0]!=-1){
				s = s + A[i][1];
				count++;
				if(count>0){
					A[i][0] = -1;
				}
			}	
		}
		if(val!=-1){
			printf("\n|");
			printf("\t%.2f\t\t%.2f",val,s/count);
			printf("\t|\n");
		}
		a++;
	}while(a<x);
	printf("\n\nOutras latitudes: sem dados");
}

int main(){
	int i,j,a=0,b=0,c=0;
	float M[x][y],M1[x][y+1],val=0;
	printf("Digite os valores para a matriz (primeiro sua latitude (entre -90 e 90) e depois seus graus celcius (entre -50 e 50):\n");
	do{
		b=0;
		printf("[%d][%d]:",a,b);
		scanf("%f",&M[a][b]);
		if(M[a][0]<-90 || M[a][0]>90 ){
			printf("Valor invalido");
			c++;
			break;
		}
		b++;
		printf("[%d][%d]:",a,b);
		scanf("%f",&M[a][b]);
		if(M[a][1]<-50 || M[a][1]>50){
			printf("Valor invalido");
			c++;
			break;
		}
		a++;
	}while(a<x && b<y);
	if(c==0){
		mostra(M);
		menor(M);
		media(M);
		tabela(M);		
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				val = M[i][1];
				M1[i][j] = M[i][j];
				M1[i][2] = ((9*(val))/5)+32;
			}
		}
		printf("\n\nMatriz Final:\n");
		for(i=0;i<x;i++){
			printf("|");
			for(j=0;j<y+1;j++){
				printf("\t%.1f",M1[i][j]);
			}
			printf("\t|\n");
		}
	}
}
