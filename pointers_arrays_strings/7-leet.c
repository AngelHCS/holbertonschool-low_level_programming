#include "main.h"
/**
 *leet - change vowels to numbers
 *@s: string to analyze
*Return: string with all the vowels converted to numbers
*/

char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071"; /*numbers needed for the final output to be correct*/
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
