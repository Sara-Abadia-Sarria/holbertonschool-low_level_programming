#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
