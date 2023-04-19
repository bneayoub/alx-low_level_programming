#include "3-calc.h"
/**
 * main - makes a simple operation
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *op;
	int arg_1, arg_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && arg_2 == 0) || (*op == '%' && arg_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(arg_1, arg_2));

	return (0);
}
