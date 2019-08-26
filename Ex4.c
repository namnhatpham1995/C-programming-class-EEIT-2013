#include <stdio.h>

int a,b,c,d,e;



int main()
{
printf("Enter a number: ")
printf("%d",&a); // Nhap tong so ngay
if (a>=365)
{
  b=int(a/365); // So nam (ca thuong va nhuan)
  
  if(b>=4)
  {
  c=b%4;   // Nam nhuan
  d=b-c;   // Nam thuong 
  e=a-(c*366+b*365); // So ngay con lai
  f=int(e/7) // So tuan
  printf("Years: ");
	printf("%d",b+c);
	printf("Weeks: ");
	printf("%d",f);
	printf("Days: ");
	printf("%d", e-f*7);
  }
  else
  {
    c=a-b*365;
	printf("Years: ");
	printf("%d",b);
	printf("Weeks: ");
	d=int(c/7);
	printf("%d",d);
	printf("Days: ");
	printf("%d", c-d*7);
	}
}

else
{
 printf("Years: ");
	printf(0);
	printf("Weeks: ");
	b=int(a/7);
	printf("%d",d);
	printf("Days: ");
	printf("%d", a-b*7);
}
}