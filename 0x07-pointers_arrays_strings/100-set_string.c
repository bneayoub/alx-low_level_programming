/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: double pointer to a string
 * @to: string
 *
 * Return: void, and changes the value of the pointer *s
 * to point to the same location as the pointer to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
