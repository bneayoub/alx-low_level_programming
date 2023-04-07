#include "main.h"
/**
  * _strcpy - check code
  * @dest: destination string
  * @src: the str that we gonna copy
  * Return: the pointer to dst
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
