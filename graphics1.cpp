/*
// C++ Programme for drawing line
#include<iostream>
#include <graphics.h>
using namespace std;
// driver code
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(150, 150, 450, 150);
    line(150, 200, 450, 200);
    line(150, 250, 450, 250);
    getch();     
    closegraph();
    return 0;
}*/
#include<graphics.h>
#include<stdio.h>
//#include<conio.h>
void main(void){
    int gdrive=DETECT,gmode;
    int x1=200,y1=200;
    int x2=300,y2=300;
    clrscr();
    initgraph(&gdriver, &gmode);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}


