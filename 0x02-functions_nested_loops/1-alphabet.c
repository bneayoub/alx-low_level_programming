int _putchar(char c);
/**
 * main - _putchar alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char character = 'a';
	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}