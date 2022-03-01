// Interesting issues:
// > "short int DelNodo" declared before call to DeleteNodo (L27), causes arrayValue to bug. [0] is set to value 0.
// > "struct_pointer->member = function_that_returns_address_of_new_node". Does't work at all. Must first pass to simple pointer, then pass it to the struct member.

#include "headers.h"

int main(int argc, char **argv)
{
	int valuesArray[MYARRAYSIZE], DelNodo, i, j, test=0;

	GetNumbers(argc, argv, valuesArray);

	// Initialize tree.
	struct Nodo *Root = NewNodo(valuesArray[0]);
	struct Nodo *PathTmp = NULL;

	BuildTree(&argc, Root, valuesArray);

	DrawMenu(Root, valuesArray, argc);
}