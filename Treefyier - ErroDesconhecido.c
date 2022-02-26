/* GetNumbers() OK
** 
** 
*/

#include <stdio.h>
#include <stdlib.h>

void GetNumbers(int argc, char** argv, int* valuesArray)
{
	int argCounter = 1;
	
	while(argCounter <= argc)
	{
		valuesArray[argCounter-1] = atoi(argv[argCounter]);
		argCounter++;
	}
}

struct Nodo {
	int Valor;
	struct Nodo * esq;
	struct Nodo * dir;
};

struct Nodo* NewNodo(int newValue){
	struct Nodo* newNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
	newNodo->Valor = newValue;
	newNodo->esq = NULL;
	newNodo->dir = NULL;
	return newNodo;
}

int main(int argc, char** argv)
{
	int valuesArray[3];
	int i, j, k;
	
	GetNumbers(argc, argv, valuesArray);
	
	struct Nodo* raiz = NewNodo(valuesArray[0]);
	
	if(valuesArray[1] < raiz->Valor) raiz.esq =  (struct Nodo*)newNodo(valuesArray[1]);
	else raiz->dir = newNodo(valuesArray[1]);
	
	if(valuesArray[2] < raiz->Valor) raiz.esq =  newNodo(valuesArray[2]);
	else raiz->dir = newNodo(valuesArray[2]);
	
	
	//printf("%d", raiz->Valor);
	raiz->esq = NewNodo(6);
	raiz->dir = NewNodo(7);
	
	printf("%d, %d, %d", raiz->Valor, raiz->esq->Valor, raiz->dir->Valor);
	
	
	
	/*
	raiz.Valor = valuesArray[0];
	raiz.esq = NULL;
	raiz.dir = NULL;
	
	for(int i = 1; i<7; i++){
		
	}
	

	
	printf("%d, %d, %d", raiz.Valor, raiz.esq->Valor, raiz.dir->Valor);
	*/

}
