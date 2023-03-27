#include "main.h"
/**
 * rev_string - check the code
 * @s: pointer to string
 * Return: string in reverse \n.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char minichar;

	while (*(s + len) != 0)
		len++;
	len--;
	while (len >= i)
	{
		minichar = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = minichar;
		len--;
		i++;
	}
}
