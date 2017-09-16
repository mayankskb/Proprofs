/*     ............................PROJECT................................
       ...............................ON..................................
       ........................Quiz on Computer Science...................
       ...................................................................
       .............................................efforts by............
       .................................................Mayank Mishra.....
									*/

//HEADER FILES USED
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include"gwork.h"

#include"OPEN.cpp"
#include"SECOND.cpp"

//MAIN FUNCTION
int main()
{       int ch;
	int i,j;
	system("cls");
	graph();
	open();                                        //cover page of quiz
	printf("\n\t\t\t    ");
	for(i=0;i<10;i++)
	{
		printf("..");
		delay(300);
	}
	closegraph();
	while(1)
	{       system("cls");
		m_menu();
		scanf("%d",&ch);
		s_menu(ch);
	}
}