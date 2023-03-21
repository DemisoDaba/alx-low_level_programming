#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1_hf1, fb1_hf2, fb2_hf1, fb2_hf2;
	unsigned long hf1, hf2;

	for (count = 0; count < 92; count++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}

	fb1_hf1 = fb1 / 10000000000;
	fb2_hf1 = fb2 / 10000000000;
	fb1_hf2 = fb1 % 10000000000;
	fb2_hf2 = fb2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		hf1 = fb1_hf1 + fb2_hf1;
		hf2 = fb1_hf2 + fb2_hf2;
		if (fb1_hf2 + fb2_hf2 > 9999999999)
		{
			hf1 += 1;
			hf2 %= 10000000000;
		}

		printf("%lu%lu", hf1, hf2);
		if (count != 98)
			printf(", ");

		fb1_hf1 = fb2_hf1;
		fb1_hf2 = fb2_hf2;
		fb2_hf1 = hf1;
		fb2_hf2 = hf2;
	}
	printf("\n");
	return (0);
}

