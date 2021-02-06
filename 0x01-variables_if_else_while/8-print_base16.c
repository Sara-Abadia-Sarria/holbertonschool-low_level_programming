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
char hexa;
for (i = 0; i <= 15; i++)
{
itoa(i, hexa, 16);
putchar(hexa);
}
putchar('\n');
return (0);
}
