#include "lista.h"

Lista* inicializa(){
	return NULL;
}

Lista* insere_inicio(lista* l, int i){
	Lista* novo = (Lista*) malloc (sizeof(Lista));
	novo->info = i; 
	novo->prox = l;
	return novo;
}

void imprime (Lista* l){
	if (!vazia(l)){
		Lista* p = l; 
		for (; p != NULL; p=p->prox){
		cout << "info =" << p->info << "\n";
		}
	}
	else {
		cout << "Lista eh vazia!";
	}
	
}

bool vazia(lista* l){
	return (l==NULL);
}
