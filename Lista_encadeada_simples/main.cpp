#include "lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Lista *l; 
	l = inicializa();
	l = insere_inicio(l,1); 
	l = insere_inicio(l,2); 
	l = insere_inicio(l,3); 
	l = insere_inicio(l,4); 
	l = insere_inicio(l,5); 
	l = insere_inicio(l,6); 
	imprime (l);
	system("pause");
	return 0;
}


