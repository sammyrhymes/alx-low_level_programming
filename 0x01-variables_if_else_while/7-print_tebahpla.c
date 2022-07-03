#include <stdio.h>
/**
 * main - Entry Point
 * return : Always 0 (success)
 */
int main(void)
{
char alphabet;
for (alphabet = 122; alphabet >= 97; alphabet--)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
