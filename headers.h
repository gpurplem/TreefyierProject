#ifndef __THIS__
#define __THIS__

struct Nodo
{
	int Value;
	struct Nodo *left;
	struct Nodo *righ;
};

#define MYARRAYSIZE 10
#include <stdio.h>
#include <stdlib.h>
#include "TreeBuilder.c"
#include "PrintTree.c"
#include <windows.h>
#include "Terminal.c"
#include "Deforest.c"
#include "PrintTreeFrame.c"
#include "Menu.c"

#endif