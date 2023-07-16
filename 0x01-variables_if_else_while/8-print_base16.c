#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
int num;
char letter;
for (num = 'a'; num < 10; num++)
putchar((num % 10) + '0');
for (letter = 'a'; letter < 10; letter++)
putchar((letter % 10) + '0');
putchar('\n');
return (0);
}
