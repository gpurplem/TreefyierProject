#include "headers.h"

void PrintChildren(int index, struct Nodo *Nodo)
{
    if (Nodo->left != NULL)
        printf("Nodo %d = %d\n", index, Nodo->left->Value);

    if (Nodo->righ != NULL)
        printf("Nodo %d = %d\n", index + 1, Nodo->righ->Value);
}

// Prints up to level 4 (0-4).
void PrintTree(struct Nodo *ActualRoot)
{
    struct Nodo *Nodo = ActualRoot;
    struct Nodo *NodoTmp = Nodo;

    // Print root
    printf("Nodo %d = %d\n", 1, Nodo->Value);

    // level 1
    PrintChildren(2, Nodo);

    // level 2
    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        PrintChildren(4, Nodo);
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        PrintChildren(6, Nodo);
    }
    Nodo = ActualRoot;

    // level 3
    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            PrintChildren(8, Nodo);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            PrintChildren(10, Nodo);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            PrintChildren(12, Nodo);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            PrintChildren(14, Nodo);
        }
    }
    Nodo = ActualRoot;

    // level 4
    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            if (Nodo->left != NULL)
            {
                Nodo = Nodo->left;
                PrintChildren(16, Nodo);
            }
        }
    }
    Nodo = ActualRoot;

    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            if (Nodo->righ != NULL)
            {
                Nodo = Nodo->righ;
                PrintChildren(18, Nodo);
            }
        }
    }
    Nodo = ActualRoot;

    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            if (Nodo->left != NULL)
            {
                Nodo = Nodo->left;
                PrintChildren(20, Nodo);
            }
        }
    }
    Nodo = ActualRoot;

    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            if (Nodo->righ != NULL)
            {
                Nodo = Nodo->righ;
                PrintChildren(22, Nodo);
            }
        }
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            if (Nodo->left != NULL)
            {
                Nodo = Nodo->left;
                PrintChildren(24, Nodo);
            }
        }
    }
    Nodo = ActualRoot;
    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            if (Nodo->righ != NULL)
            {
                Nodo = Nodo->righ;
                PrintChildren(26, Nodo);
            }
        }
    }
    Nodo = ActualRoot;
    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            if (Nodo->left != NULL)
            {
                Nodo = Nodo->left;
                PrintChildren(28, Nodo);
            }
        }
    }
    Nodo = ActualRoot;
    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            if (Nodo->righ != NULL)
            {
                Nodo = Nodo->righ;
                PrintChildren(30, Nodo);
            }
        }
    }
    Nodo = ActualRoot;
}