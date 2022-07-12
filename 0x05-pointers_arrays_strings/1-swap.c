/**
 * swap_int - swaps the value of two integers
 * @new: is
 * @a: i
 * @b: p
 */

void swap_int(int *a, int *b)
{
	int new;
	
	new = *a;
	*a = *b;
	*b = new;
}
