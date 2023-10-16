#include "main.h"

/**
* _print_rev - prints a string in reverse
* @s: string to reverse
* Return: Nothing
*/
void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(s);

for(index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}

/**
*_strlen - returns the length of a string
* @s: string
*Return: returns lenght;
*/
int _strlen(char *s)
{
int c, i;
i = 0;
for(c = 0; s[c] != '\0'; c++)
i++;
return (i);
}
