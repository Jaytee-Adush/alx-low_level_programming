#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0
 *
 */
int main(void)
{
int nums;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
if (nums == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
