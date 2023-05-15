//biblioteca criada para adicionar os exercicios em 1 arquivo só
#ifndef ARQUIVOEVERTON_H
#define ARQUIVOEVERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
static void escrever_num() {
		srand(time(0));
		FILE *arq;
		int num;
		if ((arq=fopen("arquivoeverton.txt","r+"))==NULL){
			printf("achou quer ia abrir o arquivo?\nachou errado otario\n");
			system("pause");
			exit(1);
		}
		for (int i=0;i<10;i++) {
			num = rand()%100; 
			fprintf(arq,"\n%d",num);
		}
		fclose(arq);
}
static void arquivo_1() {
	FILE *arq;
	char nome[80];
	char frase[80];
	int op;
	printf("digite o nome do arquivo: ");
	fflush(stdin);
	gets(nome);
	printf("\ndigite a função: \n 1- ler \n 2- escrever");
	if (op == 1) {
		if ((arq=fopen(nome,"r+"))==NULL){
			printf("achou quer ia abrir o arquivo?\nachou errado otario\n");
			system("pause");
		exit(1);
		}
		//while (fscanf(arq, "%d", &l) != EOF) {
		//	fgets(frase,79,arq);
		//	printf("%d %s",l,frase);
		//}
	}
	fclose(arq);
	
	
}

#endif
