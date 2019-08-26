#include <stdio.h>

int a,b,c,d;


int main()
{
printf("Enter an integer number: ");
scanf("%d",&a);
b=a;
d=0;
while (b>=10)
{
 if (b%10!=0)
  {
   c=b%10;
   d=d*10 + c;	 
   b=int(b/10);
  }
 }
 
 d=d+b;
 if (d==a)
 {
   printf("It is a Palindrome");
 }
 printf("The reverse number is: ");
 printf("%d",d);
 }