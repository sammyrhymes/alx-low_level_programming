#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/**
 *  Main - Entry point
 *  Return: Always 0 (correct) 
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n==0)
{
	pritnf("%d is zero", n);
}

if(n<0)
{
	pritnf("%d is negative", n);
}                                                                                                                                       
if(n>0)
{       
	pritnf("%d is positive", n);                                        
}                                                                               return (0);
}
