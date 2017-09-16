#include<string.h>
#include"signup.cpp"

int login()
{
	int i=0,log;
	//object for structure
	struct loginentry ud,fd;
	FILE *fp;
	fp=fopen("login.txt","rb");
	if(fp==NULL)
	{
		log=signup();
		if(log==1)
			fp=fopen("login.txt","rb");
		else
		{
			exit(1);
		}
	}
	//calls the graph function of gwork.h header file tht functions to initialise the graphics
	graph();
	cleardevice();
	fread(&fd,sizeof(struct loginentry),1,fp);
	fclose(fp);
	char *lstr=".....login.....";
	textEditting(230,20,lstr,4,5);
	gotoxy(25,9);
	printf("User Id :");
	rectangle(300,120,450,145);
	gotoxy(25,14);
	printf("Password :");
	rectangle(300,205,450,230);
	rectangle(390,280,450,310);
	gotoxy(49,19);
	printf("  Enter   ");
	gotoxy(40,9);
	scanf("%s",ud.l);
	gotoxy(40,14);
	while((ud.p[i++]=getch())!=13)
	{
		printf("*");
	}
	ud.p[i]='\0';
	gotoxy(15,22);
	if(i>=15 || strlen(ud.l)>=15)
	{
		gotoxy(22,20);
		printf("User Name or Password exceed the range");
		delay(2000);
		//return 0;
	}
	gotoxy(26,22);
	if(strcmp(fd.l,ud.l)==0 && strcmp(fd.p,ud.p)==0)
	{
		printf(".......login sucessfull.......");
		delay(2000);
		return 1;
	}
	else
	{
		printf(".........login failed.........");
		delay(2000);
		return 0;

	}
}

