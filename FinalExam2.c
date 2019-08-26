#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char array [255];
	char *P1,*P2;
	int a,NofW;
	
	printf("Enter Number of words: ");
	scanf("%d",NofW);
	printf("Enter your line of text: ");
	gets(array);

	a=strlen(array);

	for (P1=array,P2=P1+1;P1<=array+a;P1++,P2++)
	{
		if ((isalpha(*P1))&&((isspace(*P2))||(*P2=='\0')))
		{
			NofW++;

		}
	}


}