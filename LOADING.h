#include<stdio.h>
#include<conio.h>
#include<dos.h>
void loading()
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t           ");
	for(int i=0;i<=10;i++)
	{
		printf("%c",127);
		delay(100);
	}
	printf("\n\t\t\t             loading");
}
