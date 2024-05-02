/**
 * swap_int - swaps the value of two integers.
 *
 * @a: address of integer a.
 * @b: address of integer b.
 */
void swap_int(int *a, int *b)
{
	int value_a = *a;
	int value_b = *b;

	*a = value_b;
	*b = value_a;
}
