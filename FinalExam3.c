
#include <stdio.h>

struct Participant
{
	char firstname[30];
	char lastname[20];
	int stars;
	int lunch;
	int dinner;
};


char Nb2Stars(int stars, char a,char b)
{
	if (stars==2)
	return a,b;
	else return '/0';
}

int NbLch(int a,int b)
{
	if (a==1)
	b++;
	return b;
}

int Amount(int lunch, int partner, int amount, int dinner, int stars)
{
	if (lunch ==1)
	{
		if (partner=="yes")
		{
			amount+=15*2;
		}
		else
		amount+=15;
	}
	if (dinner==1)
	{
		if (partner=="yes")
		{
			amount+=35*2;
		}
		else
		amount+=35;
	}
	if (stars!=1)
	{
		if (stars==2)
		{
			amount+=75;
		}
		else amount+=100;
	}
	return amount;
}

int main()
{	int NofL;
    int members;
    int i;
    char partner;
    int amount;
    struct Participant TabPart[100];
	printf("Number of members to input: ");
	scanf("%d",members);

	for (i=1;i<=members;i++)
	{
		printf("Partner? (yes/no)");
		scanf("%s",&partner);
		printf("Enter your firstname: ");
		gets(TabPart[i].firstname);

		printf("Enter your lastname: ");
		gets(TabPart[i].lastname);

		printf("Reserve your kind of hotel (1=no hotel, 2=2 stars hotel, 3=3 stars hotel): ");
		scanf("%d",&TabPart[i].stars);

		Nb2Stars(TabPart[i].stars,TabPart[i].firstname,TabPart[i].lastname);
		printf("Choose lunch ? (1=yes,2=no)");

		scanf("%d",&TabPart[i].lunch);
		NbLch(TabPart[i].lunch,NofL);

		printf("Choose dinner ? (1=yes,2=no)");
		scanf("%d",&TabPart[i].dinner);


		printf("%d\n",Amount(TabPart[i].lunch,partner,amount,TabPart[i].dinner,TabPart[i].stars));
	}
}
