/* Write a C recursion to calculate the sum of 1^2+2^2+3^2+...+N^2 with N is a given integer from the user*/

#include<stdio.h>
#inclue<math.h>

long sum(int N);

int main()
{   int N;
	printf ("input integer N: ");
	scanf("%d",&a);
	printf("Product of a & b is: %d",sum(N));
	return 0;
}

long sum(int N)
{
	if (1==N)
	return 1;
	else
	return pow(N,2) + pow(N-1,2);
}
