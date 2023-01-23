#include <stdio.h>

#include "test.h"

void sort(int *list, int size)
{
	for(int i = 0; i < size; i++)
	{
		int memory = list[i];
		int j = i;

		while(j > 0 && list[j - 1] > memory)
		{
			list[j] = list[j - 1];

			j--;
		}

		list[j] = memory;
	}
}