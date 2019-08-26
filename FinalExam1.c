#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	char array[100];
	char *P1,*P2, search;
	int a;

	printf("Enter your series of integers: ");
	gets(array);


	printf("Input an integer (0-9): ");
	scanf("%s",&search);

	a=strlen(array);

    printf("New series: ");
    P2=array;
	for (P1=array;P1<=array+a;P1++)
	{
		if (*P1!=search)
		{   *P2=*P1;
            printf("%s",*P2);
            P2++;
		}
	}


}
