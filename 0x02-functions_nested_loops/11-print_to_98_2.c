#include "main.h"
void print_to_98(int n)
{
	int i;
	int positive_i;
	if (n<0)
	{
		for (i=n; i<=98; i++)
		{
			if (i<0)
			{
				positive_i=(-1)*i;
				_putchar('-');
				_putchar('0' + positive_i/100);

			}
		}
	}


	if (n < 98 && n>=0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i!=98){
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	if (n == 98)
	{
		_putchar(9 + 48);
		_putchar(8 + 48);
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 100)
			{
				_putchar(i/10 +'0');
				_putchar(i%10 +'0');
			}
			if (i >=100)
			{
				_putchar(i/100 +'0');
				_putchar(i/10 + '0');
				_putchar(i%10 + '0');
			}
			if (i!=98){
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}