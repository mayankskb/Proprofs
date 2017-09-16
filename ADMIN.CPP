#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<string.h>

#include"support.h"
#include"logout.cpp"


//char array for question
char s[80];

/* _________________________Full paper Change Function__________________*/
void fpaperchange()
{
	char ch;
	int i=1;
	ad ob1;
	FILE *qp,*an;
	qp=fopen("question.txt","w");
	an=fopen("answer.txt","w");
	do
	{
		clrscr();
		printf("Enter Question %d : \n",i);
		fprintf(qp,"%d",i);
		fputs("\n",qp);
		fflush(stdin);
		while(strlen(gets(s)) > 0)
		{
			fputs(s,qp);
			fputs("\n",qp);
			fflush(stdin);
		}
		fputs("\n",qp);
		fprintf(an,"%d",i);
		fputs("\n",an);
		printf("\n\nEnter Options....\n");
		printf("A. ");		scanf("%s",ob1.op1);            fflush(stdin);
		printf("B. ");		scanf("%s",ob1.op2);            fflush(stdin);
		printf("C. ");		scanf("%s",ob1.op3);            fflush(stdin);
		printf("D. ");		scanf("%s",ob1.op4);            fflush(stdin);
		printf("\n\nAnswer...."); scanf("%c",&ob1.r_ans);
		fprintf(an,"%s %s %s %s %c",ob1.op1,ob1.op2,ob1.op3,ob1.op4,ob1.r_ans);
		fputs("\n",an);
		printf("\n\n\t\t\t Want to Enter More.....");
		fflush(stdin);
		scanf("%c",&ch);
		i++;
	}while(ch=='y' || ch=='Y');
}

/* ______________________Specific Question Chage Function_________________*/
void spaperchange()
{

}

void admin()
{
	clrscr();
	int adchoice;
	gotoxy(25,3);
	printf("....... |  ADMIN PANEL  | .......");
	gotoxy(24,6);
	printf("..... | Welcome ........... | .....");
	printf("\n\n\n Here are some basic points needed to be remembered while working in the\n Admin Panel....\n");
	printf("\n 1. In this you will get two types of paper editing options i.e., \n \t (i). Making a new Paper.\n\t(ii). Replacing a qurstion in existing paper.");
	printf("\n 2. For indicating the end of a question you need to press a enter twice one for    changing the line and another for denoting that this is the end of the\n    question.");
	printf("\n 3. For each question you need to give four optins along with the answer.");
	printf("\n 4. In a Full paper change a new set of paper is given.");
	printf("\n 5. In the second option you need to give the question number that you wanted to    change and then the changed questions along with options and answers.");
	printf("\n\n \t\t\t\t\t\tPress any key to continue...");
	getch();
	clrscr();
	gotoxy(15,4);
	printf("WHat you want to do ?");
	printf("\n\n\t\t 1. Make a new paper");
	printf("\n\t\t 2. Change a particular question");
	printf("\n\t\t 3. Logout and back to main menu");
	gotoxy(25,10);
	printf(".......ADMIN YOUR CHOICE.......");
	gotoxy(40,12);
	scanf("%d",&adchoice);
	switch(adchoice)
	{
		case 1: fpaperchange();
			break;
		case 2: spaperchange();
			break;
		case 3: adchoice=logout();
			break;
		default: admin();
	}
	if(adchoice==0)
		return;
	admin();
}

