#include "main.h"
/**
* is_prime_number - returns true if the number is prime
* @n: the number to check
* Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int begin = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, begin));
}

/**
* is_prime - returns the 1 if n is a prime number
* @n: number to be checked
* @begin: number to start checking from
* Return: int
*/

int is_prime(int n, int begin)
{
	if (begin <= 1)
		return (1);
	else if (n % begin == 0)
		return (0);
	return (is_prime(n, begin - 1));
}
