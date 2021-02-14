#include<stdio.h>
#include<conio.h>
void main()
{
	int row,j;
	clrscr();
	for (row='E';row>='A';row--)
	{
		for (j='A';j<=row;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	getch();
}