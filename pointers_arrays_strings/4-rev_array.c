#include "main.h"
/**
 *  reverse_array - prints array in reverse
 *  @a: array
 *  @n: size of array
 *Return: reversed array from a
 */

void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin  = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
