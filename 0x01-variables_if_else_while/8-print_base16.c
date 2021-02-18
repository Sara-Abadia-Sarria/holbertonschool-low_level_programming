#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: prints hexadecimal
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
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
