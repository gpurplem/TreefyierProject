#include "headers.h"

//Get values from console arguments.
void GetNumbers(int argc, char** argv, int* valuesArray)
{
	int argCounter = 1;
	
	while(argCounter <= argc)
	{
		valuesArray[argCounter-1] = atoi(argv[argCounter]);
		argCounter++;
	}
}

//Creates a nodo with value.
struct Nodo* NewNodo(int newValue){
	struct Nodo* newNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
	newNodo->Value = newValue;
	newNodo->left = NULL;
	newNodo->righ = NULL;
	return newNodo;
}

//Gets the node to be inserted, puts it into correct position.
//PathTmp sets pointer in the correct slot down the tree.
void BlossomNode(struct Nodo* NodoTmp, struct Nodo* PathTmp)
{
    while (1)
    {
        if (NodoTmp->Value < PathTmp->Value)
        {
            if (PathTmp->left == NULL)
            {
                PathTmp->left = NodoTmp;
                break;
            }
            else
            {
                PathTmp = PathTmp->left;
            }
        }
        else
        {
            if (PathTmp->righ == NULL)
            {
                PathTmp->righ = NodoTmp;
                break;
            }
            else
            {
                PathTmp = PathTmp->righ;
            }
        }
    }
}