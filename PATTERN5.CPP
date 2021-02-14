#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,N;
	clrscr();
	printf("Enter number:");
	scanf("%d",&N);

	for (i=1;i<=N;i++)
	{
		for (j=1;j<=N-i+1;j++)
		{
			printf("%d",j);
		}

		printf("\n");
	}
	getch();
}