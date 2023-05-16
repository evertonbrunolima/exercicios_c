#ifndef ARQUIVOEVERTON_H
#define ARQUIVOEVERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//escrever 10 numeros aleatorios em um arquivo
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

/*1. Crie um programa que obtenha o nome do arquivo
Pergunte se irá ler ou gravar o arquivo
Se for gravar, pergunte quantas repetições fará, e duas frases
Passar essas informações para uma função
Se o arquivo já existir, sobrescrever
Se for ler, demonstrar em tela todas as linhas do arquivo*/

static void arquivo_1() {
	FILE *arq;
	char nome[80];
	char frase[80];
	int op, l;
	printf("digite o nome do arquivo: ");
	fflush(stdin);
	gets(nome);
	printf("\ndigite a função: \n 1- ler \n 2- escrever\n");
	scanf("\n%d",&op);
	
	if (op == 1) {	
		if ((arq=fopen(nome,"r+"))==NULL){
			printf("achou quer ia abrir o arquivo?\nachou errado otario\n");
			system("pause");
			exit(1);
		}	
		while (fscanf(arq, "%c", &l) != EOF){// leio do arquivo verificando EOF
		fgets(frase,79,arq);
		printf("\t%s", frase);
	}
	}	
	if (op == 2) {
		if ((arq=fopen(nome,"w"))==NULL){
			printf("achou quer ia abrir o arquivo?\nachou errado otario\n");
			system("pause");
			exit(1);
		}
		printf("digite uma frase: ");
		fflush(stdin);
		gets(frase);
		fprintf(arq,"%s",frase);
		
	}
	fclose(arq);	
}

#endif
