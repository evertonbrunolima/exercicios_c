#include <iostream>
#include <stdlib.h>
using namespace std; 


struct lista {
	int info; //campo de dado do nó-dado
	struct lista* prox; // ponteiro ao proximo no-dado
};
typedef struct lista Lista; 

Lista* inicializa();
void imprime (Lista* l); 
bool vazia(lista* l);
Lista* insere_inicio(lista *l, int i);
