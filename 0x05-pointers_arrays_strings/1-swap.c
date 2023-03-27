/**
 * swap_int - check the code
 * @a: pointer 1
 * @b: pointer 2
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
