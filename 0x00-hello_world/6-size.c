#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: This program prints various type sizes.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char is %ld bytes\n", sizeof(char));
	printf("Size of int is %ld bytes\n", sizeof(int));
	printf("Size of long int is %ld bytes\n", sizeof(long int));
	printf("Size of long long int is %ld bytes\n", sizeof(long long int));
	printf("Size of float is %ld bytes\n", sizeof(float));
	return (0);
}
