#include "headers.h"

void DrawWelcome()
{
    gotoxy(9, 3);
    printf("Welcome to Treefyier.");
}

void DrawFrame()
{
    int i, j;

    // j = height, i = width
    for (j = 0; j < 23; j++)
    {
        for (i = 0; i < 40; i++)
        {
            if (j < 1 || j > 21 || i == 0 || i == 39)
                printf("*");
            else
                printf(" ");
        }
        putchar('\n');
    }
}

void DrawOriginal(struct Nodo *Root)
{
    gotoxy(2, 6);
    printf("Original:");
    PrintTreeFrame(Root, 2, 7);
}

void DrawFixedElements(struct Nodo *Root)
{
    DrawFrame();
    DrawWelcome();
    DrawOriginal(Root);
}

void DrawQuestions()
{
    gotoxy(2, 18);
    printf("Type value of node to delete it.");
    gotoxy(2, 19);
    printf("Type -1 to end application.");
    gotoxy(2, 20);
    printf("Option: ");
}

void EraseNonFixed()
{
    int i, j;

    // i = x, j = y.
    // Erase New array.
    for (j = 6; j < 17; j++)
    {
        for (i = 20; i < 39; i++)
        {
            gotoxy(i, j);
            printf(" ");
        }
    }

    // i = x, j = y.
    // Erase Questions.
    for (j = 18; j < 21; j++)
    {
        for (i = 2; i < 39; i++)
        {
            gotoxy(i, j);
            printf(" ");
        }
    }
}

void DrawMenu(struct Nodo *Root, int* valuesArray, int argc)
{
    int DelNodo;

    DrawFixedElements(Root);

    while (1)
    {
        EraseNonFixed();

        DrawQuestions();

        scanf("%i", &DelNodo);

        if (DelNodo == -1)
        {
            gotoxy(2, 21);
            printf("Thank you for using Treefyier.\n");
            gotoxy(0, 24);
            exit(0);
        }

        if (DeleteNodo(valuesArray, DelNodo, argc) == 1)
        {
            // Rebuild tree from scratch.
            Root = NewNodo(valuesArray[0]);
            BuildTree(&argc, Root, valuesArray);

            gotoxy(20, 6);
            printf("New: ");
            PrintTreeFrame(Root, 20, 7);
        }
        else
        {
            gotoxy(2, 21);
            printf("Value not found. Try again.\n");
        }

        gotoxy(0, 25);
        system("pause");
    }
}