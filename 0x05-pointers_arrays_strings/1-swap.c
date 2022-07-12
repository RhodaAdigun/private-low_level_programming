/**
 * swap_int - swaps the value of two intergers
 * @new: is
 * @a: i
 * @b: p
 */

void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	*b = *a;
}
