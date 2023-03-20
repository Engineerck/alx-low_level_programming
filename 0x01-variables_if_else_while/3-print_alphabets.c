#include <stdio.h>

/**
 * main - function 
 *
 * Return: always 0
 */

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase++);
}
while (uppercase <= 'Z')
{
putchar(uppercase++);
}
putchar('\n');
return 0;
}
