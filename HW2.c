/* Write a C recursion to calculate the product of two integer a and b (suppose a and b are non-negative*/

#include<stdio.h>

long product(int a,int b);

int main()
{   int a,b;
	printf ("input integer a: ");
	scanf("%d",&a);
	printf ("input integer b: ");
	scanf("%d",&b);
	printf("Product of a & b is: %d",product(a,b));
	return 0;
}

long product(int a,int b)
{
	if (0==b)
	return 0;
	else
	return a + product(a,b-1);
}
