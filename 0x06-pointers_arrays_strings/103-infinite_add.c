/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result buffer, or 0 if result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, max_len = 0;
	int sum, carry = 0, i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	max_len = len1 > len2 ? len1 : len2;

	if (max_len >= size_r)
		return (0);

	r[max_len] = '\0';
	len1--;
	len2--;
	for (i = 0; i < max_len; i++)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		r[max_len - i - 1] = sum % 10 + '0';
		carry = sum / 10;
		len1--;
		len2--;
	}

	if (carry != 0)
	{
		if (max_len + 1 >= size_r)
			return (0);
		for (j = max_len; j >= 0; j--)
			r[j + 1] = r[j];
		r[0] = carry + '0';
	}
	return (r);
}
