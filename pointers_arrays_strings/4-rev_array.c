/**
 * reverse_array - everses the content of an array of integers.
 *
 * @a: array to reverse
 * @n: the number of elements of the array
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	char c;

	for (i = 0, j = n - 1; i <= j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
