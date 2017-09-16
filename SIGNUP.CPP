struct loginentry
{
	char l[15],p[15];
};
int signup()
{      	graph();
	cleardevice();
	struct loginentry obj;
	cleardevice();
	int i=0;
	char *lstr=".....signup.....";
	textEditting(230,20,lstr,4,5);
	gotoxy(25,9);
	printf("User Id :");
	rectangle(300,110,450,130);
	gotoxy(25,14);
	printf("Password :");
	rectangle(300,180,450,200);
	rectangle(390,250,450,270);
	gotoxy(49,19);
	printf("  Enter   ");
	gotoxy(40,9);
	scanf("%s",obj.l);
	gotoxy(40,14);
	while((obj.p[i++]=getch())!=13)
	{
		printf("*");
	}
	obj.p[i]='\0';
	gotoxy(15,22);
	if(i>=15 || strlen(obj.l)>=15)
	{
		gotoxy(22,20);
		printf("User Name or Password exceed the range");
		delay(2000);
		return 0;
	}
	FILE *fp;
	fp=fopen("login.txt","wb");
	fwrite(&obj,sizeof(struct loginentry),1,fp);
	fclose(fp);
	gotoxy(26,22);
	printf("......Signup sucessfully......");
	delay(2000);
	closegraph();
	return 1;
}

