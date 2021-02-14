#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter a Character:");
	scanf("%c",&ch);

	if (isupper(ch))
	{
		printf("\n %c is an upper case character",ch);
	}
	else if (islower(ch))
	{
		printf("\n %c is a lower case character",ch);
	}
	else if (isdigit(ch))
	{
		printf("\n %c is a digit case character",ch);
	}
	else
	{
		printf("\n %c is a special character",ch);
	}
	getch();
}