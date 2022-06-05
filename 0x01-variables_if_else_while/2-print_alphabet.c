#include <stdio.h>
#include <ctype.h>
/**
 * main -entry point
 * Description: printalphabet in lowercase
 * Return: 0
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
