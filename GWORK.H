#include <graphics.h>
void graph()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
}
void textEditting(int x,int y,char *name,int style,int size)
{
      settextstyle(style, HORIZ_DIR, size);
      /* output a message */
      outtextxy(x, y, name);
}
