/*
#include<graphics.h>
#include<stdio.h>

main()
{
int gd=DETECT,gm;
int i,x,y;
initgraph(&gd,&gm,NULL);
line(0,0,640,0);
line(0,0,0,480);
line(639,0,639,480);
line(639,479,0,479);
for(i=0;i<=1000;i++)
{
   x=rand()%639;
   y=rand()%480;
   putpixel(x,y,15);
}
  getch();
  closegraph();
}
*//*
#include<graphics.h>
#include<stdio.h>
//#include<conio.h>
 main(){
    int gdrive=DETECT,gmode;
    int x1=200,y1=200;
    int x2=300,y2=300;
   system("clear");
    initgraph(&gdrive, &gmode,NULL);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}
*/

#include <graphics.h>

int main()
{
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
   initgraph(&gd,&gm,NULL);
   rectangle(left, top, right, bottom);
   circle(x, y, radius);
   bar(left + 300, top, right + 300, bottom);
   line(left - 10, top + 150, left + 410, top + 150);
   ellipse(x, y + 200, 0, 360, 100, 50);
   outtextxy(left + 100, top + 325, "C Graphics Program");

   delay(5000);
   closegraph();
   return 0;
}
