#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: 0
 *
 */
int main(void)
{
char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}
