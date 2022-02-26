#ifndef __THIS__
#define __THIS__

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int Value;
	struct Nodo * left;
	struct Nodo * righ;
};

#include "TreeBuilder.c"
//void BlossomNode(struct Nodo* NodoTmp, struct Nodo* PathTmp);

#endif