/**
 * infinite_add - adds two numbers
 * @n1: first number as string
 * @n2: second number as string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	len1 = 0;
	while (n1[len1] != '\0')
		len1++;
	len2 = 0;
	while (n2[len2] != '\0')
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0';
	size_r--;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[size_r - 1] = sum % 10 + '0';
		size_r--;
		i--;
		j--;
	}

	if (size_r < 0)
		return (0);

	i = 0;
	while (r[i] != '\0')
	{
		if (r[i] < '0' || r[i] > '9')
			return (0);
		i++;
	}

	return (r + size_r + 1);
}
