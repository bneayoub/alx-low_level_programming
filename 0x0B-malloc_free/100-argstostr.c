#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Merges all program arguments into a single string;
 * each argument is separated by a newline character
 *
 * @ac: The args count
 * @av: array pointer to the args
 *
 * Return: NULL if conditions not met
 * Otherwise, returns the newly created string
 */
char *argstostr(int ac, char **av)
{
	char *result_str;
	int arg_idx, char_idx, new_str_idx, total_size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg_idx = 0; arg_idx < ac; arg_idx++)
	{
		for (char_idx = 0; av[arg_idx][char_idx]; char_idx++)
			total_size++;
	}
	result_str = malloc(sizeof(char) * total_size + 1);

	if (result_str == NULL)
		return (NULL);

	new_str_idx = 0;

	for (arg_idx = 0; arg_idx < ac; arg_idx++)
	{
		for (char_idx = 0; av[arg_idx][char_idx]; char_idx++)
			result_str[new_str_idx++] = av[arg_idx][char_idx];

		result_str[new_str_idx++] = '\n';
	}

	result_str[total_size] = '\0';
	return (result_str);
}
