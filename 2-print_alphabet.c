#include <stdio.h>
/**
 * main - Entry Point
 * Return : Always 0 (correct)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return 0;
}