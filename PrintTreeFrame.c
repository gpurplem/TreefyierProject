#include "headers.h"

void PrintChildrenFrame(int index, struct Nodo *Nodo, int xPos, int *yPos)
{
    if (Nodo->left != NULL)
    {
        gotoxy(xPos, *yPos);
        printf("Nodo %d = %d\n", index, Nodo->left->Value);
        *yPos = *yPos + 1;
    }

    if (Nodo->righ != NULL)
    {
        gotoxy(xPos, *yPos);
        printf("Nodo %d = %d\n", index + 1, Nodo->righ->Value);
        *yPos = *yPos + 1;
    }
}

// Prints up to level 4 (0-4).
void PrintTreeFrame(struct Nodo *ActualRoot, int xPos, int yPos)
{
    struct Nodo *Nodo = ActualRoot;
    struct Nodo *NodoTmp = Nodo;

    // Print root
    gotoxy(xPos, yPos);
    yPos++;
    printf("Nodo %d = %d\n", 1, Nodo->Value);

    // level 1
    PrintChildrenFrame(2, Nodo, xPos, &yPos);

    // level 2
    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        PrintChildrenFrame(4, Nodo, xPos, &yPos);
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        PrintChildrenFrame(6, Nodo, xPos, &yPos);
    }
    Nodo = ActualRoot;

    // level 3
    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            PrintChildrenFrame(8, Nodo, xPos, &yPos);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->left != NULL)
    {
        Nodo = Nodo->left;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            PrintChildrenFrame(10, Nodo, xPos, &yPos);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->left != NULL)
        {
            Nodo = Nodo->left;
            PrintChildrenFrame(12, Nodo, xPos, &yPos);
        }
    }
    Nodo = ActualRoot;

    if (Nodo->righ != NULL)
    {
        Nodo = Nodo->righ;
        if (Nodo->righ != NULL)
        {
            Nodo = Nodo->righ;
            PrintChildrenFrame(14, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(16, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(18, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(20, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(22, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(24, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(26, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(28, Nodo, xPos, &yPos);
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
                PrintChildrenFrame(30, Nodo, xPos, &yPos);
            }
        }
    }
    Nodo = ActualRoot;
}