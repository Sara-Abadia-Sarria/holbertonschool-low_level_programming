#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: prints the numbers from 00 to 99
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
if (i == '9' && j == '9')
{
break;
}
}
}
putchar('\n');
return (0);
}
