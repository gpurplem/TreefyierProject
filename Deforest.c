#include "headers.h"

// Deletes a node based on its actual value, not index.
// New array contains only existing nodes.
// Returns 0 if DelNodo is not found.
int DeleteNodo(int *Array, int DelNodo, int size)
{
	int NewArray[MYARRAYSIZE - 1], i, j, foundSignal = 0;

	for (i = 0, j = 0; i < size; i++)
	{
		
		if (Array[i] != DelNodo)
		{
			NewArray[j] = Array[i];
			j++;
		}
		else
		{
	
			foundSignal = 1;
			continue;
		}
	}

	if (foundSignal == 0){
		return 0;
	}
		

	for (i = 0; i < size; i++)
	{
		Array[i] = NewArray[i];
	}

	if (foundSignal == 1){
		return 1;
	}
}