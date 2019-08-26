#include <stdio.h>

int a,b,c;

int main()
{
printf('Enter a binary number: ');
scanf('%d',&a);

c=0;
if (a>1)
{
	while (a>0)
	{
		if (a%10==0)
		{
			b=++b;
		}
		else
		{
			c=c+pow(2,b);
			b=++b;
		}
		a=(a-(a%10))/10;
	}
	printf("The decimal number is: ");
	printf("%d",c);
}
else
{
	printf("The decimal number is: ");
	printf("%d",a);
}
}
