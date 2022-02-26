/* GetNumbers() OK
**
** Nodo: 1st store into local variable, then from it, store into struct.
** this doesn't work: raiz->esq = newNodo(valuesArray[1]);
** 
** Root and children only get values.
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
	int Value;
	struct Nodo * left;
	struct Nodo * righ;
};

struct Nodo* NewNodo(int newValue){
	struct Nodo* newNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
	newNodo->Value = newValue;
	newNodo->left = NULL;
	newNodo->righ = NULL;
	return newNodo;
}

int main(int argc, char** argv)
{
	int valuesArray[7];
	int i, j, k;
	
	GetNumbers(argc, argv, valuesArray);
	
	struct Nodo* Root = NewNodo(valuesArray[0]);
	struct Nodo* NodoTmp = NULL;
	struct Nodo* PathTmp = NULL;
		
	for(i = 1; i<argc-1; i++)
	{
		NodoTmp = NewNodo(valuesArray[i]);
		PathTmp = Root;
		
		while(1)
		{
			if(NodoTmp->Value < PathTmp->Value){
				if(PathTmp->left == NULL){
					PathTmp->left = NodoTmp;
					break;
				} else {
					PathTmp = PathTmp->left;
				}
			} else {
				if(PathTmp->righ == NULL){
					PathTmp->righ = NodoTmp;
					break;
				} else {
					PathTmp = PathTmp->righ;
				}
			}
		}
		
		

	}
	
	PathTmp = Root;
	printf("%d ", PathTmp->Value);
	
	PathTmp = PathTmp->righ;
	printf("%d ", PathTmp->Value);
	
	//Era pra imprimir o 14.
	PathTmp = PathTmp->righ;
	printf("%d ", PathTmp->Value);	
}
