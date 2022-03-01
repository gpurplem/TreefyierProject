#include "headers.h"

// Get values from console arguments and save them in valuesArray.
void GetNumbers(int argc, char **argv, int *valuesArray)
{
    int argCounter = 0;

    while (argCounter < argc)
    {
        valuesArray[argCounter] = atoi(argv[argCounter + 1]);
        argCounter++;
    }
}

// Creates a node with inserted value.
struct Nodo *NewNodo(int newValue)
{
    struct Nodo *newNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    newNodo->Value = newValue;
    newNodo->left = NULL;
    newNodo->righ = NULL;
    return newNodo;
}

// NodoTmp is the node to be added to the tree.
// PathTmp is always root node.
void BlossomNode(struct Nodo *NodoTmp, struct Nodo *PathTmp)
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

// Inserts array values into correct node position.
// Doesn't create root node! It adds to existing one.
// argc is decremented in order to correctly delete nodes in DeleteNodo().
void BuildTree(int *argc, struct Nodo *Root, int *valuesArray)
{
    struct Nodo *NodoTmp = NULL;
    struct Nodo *PathTmp = NULL;
    int i;

    for (i = 1; i < *argc - 1; i++)
    {
        NodoTmp = NewNodo(valuesArray[i]);
        PathTmp = Root;

        BlossomNode(NodoTmp, PathTmp);
    }

    *argc -= 1;
}