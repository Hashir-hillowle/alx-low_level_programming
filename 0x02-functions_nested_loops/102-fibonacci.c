#include <stdio.h>

/**
 * print_fib_x50 - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: void
 */
int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (countto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
