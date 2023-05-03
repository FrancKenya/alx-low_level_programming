#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the minimum number of coins
* @argc: argument count
* @argv: argument vector
* Return: 0 success
*/
int main(int argc, char **argv)
{
	int cents, quarters, tens, fives, twos, ones, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents -= quarters * 25;
	tens = cents / 10;
	cents -= tens * 10;
	fives = cents / 5;
	cents -= fives * 5;
	twos = cents / 2;
	cents -= twos * 2;
	ones = cents / 1;
	cents -= ones * 1;
	coins = quarters + tens + fives + twos + ones;
	printf("%d\n", coins);
	return (0);
}
