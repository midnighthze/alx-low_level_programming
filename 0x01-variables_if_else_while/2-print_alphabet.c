#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet
 * Return: returns 0 (successful)
 */

int main(void)
{
int ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
