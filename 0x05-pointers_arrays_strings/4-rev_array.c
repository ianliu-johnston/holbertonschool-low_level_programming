/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[1024];

	i = 0;
	n -= 1;
	while (n >= 0)
	{
		b[i] = a[n];
		n--;
		i++;
	}
	b[i] = '\0';
	for ( ; i >= 0; i--)
		a[i] = b[i];
}
