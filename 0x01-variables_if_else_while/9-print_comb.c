#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
