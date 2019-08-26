#include <stdio.h>

int x,y,z;
int main()
{
	printf("Please enter first integer number: ");
    scanf("%d",&x);
	printf("Please enter second integer number: ");
	scanf("%d",&y);
	printf("Please enter third integer number: ");
	scanf("%d",&z);
	
	if (x>y && x>z)
	 {
	 printf("x is the largest");
	 else if (y>x && y>z)
	    {print("y is the largest");}
	 else printf("z is the largest");
	}
}