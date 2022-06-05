#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e in lowercase
 *
 * Return: 0
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alpha <= 'z'; alpha++)
if (alphabet != 'e' && alpha != 'q')
putchar(alphabet);
putchar('\n');
return (0);
}
