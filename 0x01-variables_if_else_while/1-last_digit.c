#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -prints the last digits of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last diit of %d is ", n);
	num =n % 10;
	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
