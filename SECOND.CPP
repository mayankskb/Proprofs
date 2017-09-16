#include"loading.h"
#include"end.cpp"
#include"admin.cpp"
#include"practise.cpp"
#include"login.cpp"
/*           ......................Menu Page......................       */
void m_menu()
{
	printf("\n\n\n\n\n\t\t\t   ......CHOOSE WHAT TO DO......\n\n\n\n");
	printf("\t\t\t\t| 1.   Practice  |\n");
	printf("\t\t\t\t| 2.     Play    |\n");
	printf("\t\t\t\t| 3. Admin Panel |\n");
	printf("\t\t\t\t| 4.     Exit    |\n");
	printf("\n\n\n Enter your choice......");
}

/*           ...................Second Module ...................         */

void s_menu(int choice)
{
	loading();
	int loginval;
	switch(choice)
	{
		case 1: practise();
			break;
		case 2:// play();
			printf("this is play page");
			break;
		case 3: loginval=login();
			cleardevice();
			closegraph();
			if(loginval==1)
				admin();
			break;
		case 4: end();
			break;
	}
}