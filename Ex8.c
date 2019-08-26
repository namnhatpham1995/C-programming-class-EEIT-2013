#include <stdio.h>

int a,b=0;


printf("Initial number is: ")
printf("%d",&a);

int main()
{	if (a<1)
	{
		printf("Error");
		exit(0);
	}
	
	while (a!=1)
	{
		if (a%2==0)
		{	
			a=a/2;
			b++;
			printf("The next number is: ");
			printf("%d",a);
		}
		else
		{
			a=a*3+1;
			b++;
			printf("The next number is: ");
			printf("%d",a);
		}
	}
	
	printf("Final value is 1, number of steps is: ");
	printf("%d",b);
}