#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#define x 10

void *ola_mundo(void *tid){
	printf("Olá, thread %d criada!", tid);
	pthread_exit(NULL);
}

int main(){
	pthread_t thread[x];
	int stts,i;
	for(i=0;i<x;i++){
		printf("\nThread principal. Criando thread %d",i+1);
		stts = pthread_create(&thread[i], NULL, ola_mundo,(void *)i);
		if(stts!=0){
			printf("Erro %d",stts);
			exit(-1);
		}
	}
	exit(0);
}
