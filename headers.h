#ifndef __THIS__
#define __THIS__

struct Nodo {
	int Value;
	struct Nodo * left;
	struct Nodo * righ;
};

#define ARRAYSIZE 10
#include <stdio.h>
#include <stdlib.h>
#include "TreeBuilder.c"
#include "PrintTree.c"
#include "Deforest.c"

#endif