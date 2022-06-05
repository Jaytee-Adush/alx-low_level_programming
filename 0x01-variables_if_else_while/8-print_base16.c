#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
int num;
char alphabet;

for (num = 0; num <= 9; num++)
for (alphabet = 'a'; alphabet  <= 'f'; alphabet++)
putchar(num + '0');
putchar(alphabet);
putchar('\n');
return (0);
}
