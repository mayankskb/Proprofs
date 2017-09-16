int logout()
{
	//calls the graph function of gwork.h header file tht functions to initialise the graphics
	graph();
	char *lstr=".....logout.....";
	gotoxy(37,8);
	printf("logging out");
	delay(3000);
	textEditting(230,120,lstr,4,5);
	getch();
	closegraph();
	return 0;
}