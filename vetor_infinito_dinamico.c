#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h> //para ambiente ms-dos, usa getch para efeito de pausa

main (){
	float *v;
	int indice;
	int cont=1;
	v = (float*) malloc(cont * sizeof(float));
	//v = (*float) malloc(cont * 4);
	do {
		if (cont > 1){
			 v = (float *) realloc(v, cont * sizeof(float));
		}
		printf ("digite um valor: ");
		indice = cont-1;
		scanf("%f",&v[indice]);
		//printf("\n %f",*(v+(cont-1)));
		cont++;
	}
	while (*(v+(cont-2)) != 0);
	
	for (int i=0; i<cont;i++){
		printf("\n%f", *(v+i));
	}
}
