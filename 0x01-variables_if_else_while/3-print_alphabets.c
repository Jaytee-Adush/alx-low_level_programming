#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: print lowercase alphabet then uppercase
 * Return: 0
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);

}
