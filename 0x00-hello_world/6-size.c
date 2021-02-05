#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types
 * Return: Always 0 (Success)
 */

int main(void)
{
int Entero;
float Flotante;
long int Entero_largo;
long long int Entero_largo_largo;
char Caracter;
char Complemento = "byte(s)";
printf("Size of a char: %zu byte(s)\n", sizeof(Caracter));
printf("Size of an int: %zu byte(s)\n", sizeof(Entero));
printf("Size of a long int: %zu byte(s)\n", sizeof(Entero_largo));
printf("Size of a long long int: %zu byte(s)\n", sizeof(Entero_largo_largo));
printf("Size of a float: %zu byte(s)\n", sizeof(Flotante));
return (0);
}
