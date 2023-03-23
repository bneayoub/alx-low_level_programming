#include <stdio.h>
int is_primary(long long int n)
{
	long long int i = 2;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%llu is not primary\n", n);
			return (0);
		}
	}

	printf("%llu is primary\n", n);
	return (1);
}

int main(void){
	long long int n=612852475143;

	is_primary(n);
}