/* 
 * File:   circle.c
 * Author: madhavcomputers
 *
 * Created on June 12, 2019, 10:09 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   int gd=DETECT, gm, i, x, y;
   initgraph(&gd,&gm,"c:\\turboc3\\BGI");
   x=getmaxx()/2;
   y=getmaxy()/2;
   for(i=0;i<50;i++){
       circle(x,y,100);
       x=x+5;
       delay(100);
       clrscr();
   }
   getch();
   closegraph();
    return (EXIT_SUCCESS);
}

