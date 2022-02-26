/* GetNumbers() OK
**
** Nodo: 1st store into local variable, then from it, store into struct.
** this doesn't work: raiz->esq = newNodo(valuesArray[1]);
** 
** Root and children only get values.
*/

#include "headers.h"

int main(int argc, char** argv)
{
	int valuesArray[7];
	int i;
	
	GetNumbers(argc, argv, valuesArray);

	//Initialize tree.
	struct Nodo* Root = NewNodo(valuesArray[0]);
	struct Nodo* NodoTmp = NULL;
	struct Nodo* PathTmp = NULL;
	
	//Build tree
	for(i = 1; i<argc-1; i++)
	{
		NodoTmp = NewNodo(valuesArray[i]);
		PathTmp = Root;

		BlossomNode(NodoTmp, PathTmp);
	}
	

	//Testing section.
	PathTmp = Root;
	printf("%d ", PathTmp->Value);
	
	PathTmp = PathTmp->left;
	printf("%d ", PathTmp->Value);
	
	//Era pra imprimir o 14.
	PathTmp = PathTmp->righ;
	printf("%d ", PathTmp->Value);	
}
