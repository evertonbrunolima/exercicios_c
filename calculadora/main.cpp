#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h> //para ambiente ms-dos, usa getch para efeito de pausa
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void imprimir_opcoes(){
	cout << "-----------------------------------------\n";
	cout << "|        Bem vindo a calculadora        |\n";
	cout << "-----------------------------------------\n";
	cout << "|  Menu:                                |\n";
	cout << "|  1- adicao                            |\n";
	cout << "|  2- substracao                        |\n";
	cout << "|  3- multiplicacao                     | \n";
	cout << "|  4- divisao                           | \n";
	cout << "|  5- potencia                          | \n";
	cout << "|  6- raiz                              | \n";
	cout << "|  7- eh_par                            | \n";
	cout << "|  8- eh_impar                          | \n";
	cout << "|  9- eh_primo                          | \n";
	cout << "|  0- sair                              | \n";
	cout << "-----------------------------------------\n";
	cout << "Digite uma opcao:";
}

void somar(float *memoria,int tam){
	float somatorio=0;
	for (int i=0;i<tam;i++){
		cout << memoria[i];
		somatorio += memoria[i];
		if (i<tam-1){
			cout << "+";
		}
	}
	cout << " = "<<somatorio<<"\n\n\n";
}

void mul(float *memoria,int tam){
	float somatorio=1;
	for (int i=0;i<tam;i++){
		cout << memoria[i];
		somatorio *= memoria[i];
		if (i<tam-1){
			cout << "X";
		}
	}
	cout << " = "<<somatorio<<"\n\n\n";
}


void substrair(float *memoria,int tam){
	float somatorio=memoria[0];
	cout << memoria[0];
	cout << "-";
	for (int i=1;i<tam;i++){
		cout << memoria[i];
		somatorio -= memoria[i];
		if (i<tam-1){
			cout << "-";
		}
	}
	cout << " = "<<somatorio<<"\n\n\n";
}

void divisao(float *memoria,int tam){
	float somatorio=memoria[0];
	cout << memoria[0];
	cout << "/";
	for (int i=1;i<tam;i++){
		cout << memoria[i];
		somatorio /= memoria[i];
		if (i<tam-1){
			cout << "/";
		}
	}
	cout << " = "<<somatorio<<"\n\n\n";
}

int pegar_numeros(float *memoria){
	int cont=0;
	int escolha;
	while (true){
		cout << "\nDigite um numero: ";
		cin >> 	memoria[cont];
		cont++;
		if (cont > 1){	
			cout << "\nDeseja adicionar mais um numero? 1- Sim 2-Nao ";
			cin >> escolha; 
			if (escolha == 2){
				break;
			}
			else {
				memoria = (float *) realloc(memoria, cont * sizeof(float));	
			}
		}	
	}
	return cont;
}


void funcao_calculadora(int opcao){
	float *memoria_calc;
	int indice;
	int cont=0;
	memoria_calc = (float*) malloc(2 * sizeof(float));
	switch (opcao){
		case 1: 
			cout << "Funcao soma: \n";
			cont =pegar_numeros(memoria_calc);
			cout << "\nA soma e igual: \n";
			somar(memoria_calc,cont);
			free(memoria_calc);
			break;	
			
		case 2: 
			cout << "Funcao substrair: \n";
			cont =pegar_numeros(memoria_calc);
			cout << "\nA substracao e igual: \n";
			substrair(memoria_calc,cont);	
			free(memoria_calc);
			break;	
			
		case 3: 
			cout << "Funcao substrair: \n";
			cont =pegar_numeros(memoria_calc);
			cout << "\nA multiplicacao e igual: \n";
			mul(memoria_calc,cont);	
			free(memoria_calc);
			break;	
			
		case 4: 
			cout << "Funcao dividir: \n";
			cont =pegar_numeros(memoria_calc);
			cout << "\nA divisao e igual: \n";
			divisao(memoria_calc,cont);	
			free(memoria_calc);
			break;
	}
	
}

int main(int argc, char** argv) {
	int opcao;
	do {
		imprimir_opcoes();
		cin >> opcao; 
		funcao_calculadora(opcao);
	}
	while (opcao != 0);
	
	
	
}
