#include <stdio.h>

float x,y,y0,x1,y1;
x=0; 

int main()
{
	printf("Input a in y=a*x+b: "); scanf("%d",&a);
	printf("Input b in y=a*x+b: "); scanf("%d",&b);
	y0=a*x+b;
	
	if (a*b<0)
	{
		while (y>=0)
		{
			x=x+0.1;
			y=a*x+b;
		}
		x1=x/2;			
		y1=(y+y0)/2;
		while(fabs(y1)>0.001)
		{
			y1=(y+y1)/2;
			x1=(x+x1)/2;
		}
		printf("x= %f",x1);
		printf("y= %f",y1)
	}
	else
	{
		while (y>=0)
		{
			x=x-0.1;
			y=a*x+b;
		}
		x1=x/2;			
		y1=(y+y0)/2;
		while(fabs(y1)>0.001)
		{
			y1=(y+y1)/2;
			x1=(x+x1)/2;
		}
		printf("x= %f",x1);
		printf("y= %f",y1)
	}
}