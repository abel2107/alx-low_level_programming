#include <stdio.h>
/**
 * main - start the program
 * creat char
 * creat int
 * creat long int
 * creat long long int
 * creat a float
 * print size of char
 * print size of int
 * print size od long int
 * print size of long long int
 * print size of float
 * Return: 0 returns zreoo after all that
 *
 */
int main(void)
{	
	char C;
	int I;
	long int LI;
	long long int LLI;
	float F;
	
	printf("Size of a char: %li byte(s)\n", sizeof(C));
	printf("Size of an int: %li byte(s)\n", sizeof(I));
	printf("Size of a long int: %li byte(s)\n", sizeof(LI));
	printf("Size of a long long int: %li byte(s)\n", sizeof(LLI));
	printf("Size of a float: %li byte(s)\n", sizeof(F));
	return (0);
}

