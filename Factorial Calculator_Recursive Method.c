//Design a C program that calculates the factorial of a given number using both iterative and recursive methods.
#include<stdio.h>
int facto(int n)
{
if( n == 0)
{ return 1; }
return n*facto(n-1);
}

void main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Factorial=%d",facto(n));
}